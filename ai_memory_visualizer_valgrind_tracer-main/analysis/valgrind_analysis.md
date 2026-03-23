Rapport aliasing_example.c :

Commande utilisée : valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./aliasing

Rapport d'erreur affiché :

==12286== Memcheck, a memory error detector
==12286== Copyright (C) 2002-2022, and GNU GPL'd, by Julian Seward et al.
==12286== Using Valgrind-3.22.0 and LibVEX; rerun with -h for copyright info
==12286== Command: ./aliasing
==12286== 
aliasing_example: aliasing and use-after-free (Valgrind should report it)
  a=0x4a7e480 b=0x4a7e480 a[2]=22 b[2]=22
  after free(a): b=0x4a7e480 (dangling)
  reading b[2]=22
  wrote b[3]=1234
==12286== 
==12286== HEAP SUMMARY:
==12286==     in use at exit: 20 bytes in 1 blocks
==12286==   total heap usage: 2 allocs, 1 frees, 1,044 bytes allocated
==12286== 
==12286== 20 bytes in 1 blocks are definitely lost in loss record 1 of 1
==12286==    at 0x4885250: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-arm64-linux.so)
==12286==    by 0x10884B: make_numbers (aliasing_example.c:12)
==12286==    by 0x1088DF: main (aliasing_example.c:30)
==12286== 
==12286== LEAK SUMMARY:
==12286==    definitely lost: 20 bytes in 1 blocks
==12286==    indirectly lost: 0 bytes in 0 blocks
==12286==      possibly lost: 0 bytes in 0 blocks
==12286==    still reachable: 0 bytes in 0 blocks
==12286==         suppressed: 0 bytes in 0 blocks
==12286== 
==12286== For lists of detected and suppressed errors, rerun with: -s
==12286== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

Valgrind a identifié une erreur de perte certaine de 20 bytes dans 1 block par make_numbers à la ligne 12 et appelé dans le main à la ligne 30.
Un bloc de 20 octets a été alloué dans make_numbers, mais le pointeur vers ce bloc a été écrasé ou perdu sans avoir été libéré (j'ai supprimé le free a qui était faux dans tout les cas pour pouvoir compiler)





Rapport crash_example.c :

Commande utilisée : valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./crash

Rapport d'erreur affiché : 

==23534== Memcheck, a memory error detector
==23534== Copyright (C) 2002-2022, and GNU GPL'd, by Julian Seward et al.
==23534== Using Valgrind-3.22.0 and LibVEX; rerun with -h for copyright info
==23534== Command: ./crash
==23534== 
crash_example: deterministic NULL dereference (segmentation fault)
  requesting n=0
==23534== Invalid write of size 4
==23534==    at 0x10893C: main (crash_example.c:32)
==23534==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==23534== 
==23534== 
==23534== Process terminating with default action of signal 11 (SIGSEGV)
==23534==  Access not within mapped region at address 0x0
==23534==    at 0x10893C: main (crash_example.c:32)
==23534==  If you believe this happened as a result of a stack
==23534==  overflow in your program's main thread (unlikely but
==23534==  possible), you can try to increase the size of the
==23534==  main thread stack using the --main-stacksize= flag.
==23534==  The main thread stack size used in this run was 8388608.
==23534== 
==23534== HEAP SUMMARY:
==23534==     in use at exit: 1,024 bytes in 1 blocks
==23534==   total heap usage: 1 allocs, 0 frees, 1,024 bytes allocated
==23534== 
==23534== 1,024 bytes in 1 blocks are still reachable in loss record 1 of 1
==23534==    at 0x4885250: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-arm64-linux.so)
==23534==    by 0x492F05F: _IO_file_doallocate (filedoalloc.c:101)
==23534==    by 0x493ECA3: _IO_doallocbuf (genops.c:347)
==23534==    by 0x493ECA3: _IO_doallocbuf (genops.c:342)
==23534==    by 0x493CF7B: _IO_file_overflow@@GLIBC_2.17 (fileops.c:745)
==23534==    by 0x493D9DB: _IO_new_file_xsputn (fileops.c:1244)
==23534==    by 0x493D9DB: _IO_file_xsputn@@GLIBC_2.17 (fileops.c:1197)
==23534==    by 0x4931B5F: puts (ioputs.c:40)
==23534==    by 0x108917: main (crash_example.c:27)
==23534== 
==23534== LEAK SUMMARY:
==23534==    definitely lost: 0 bytes in 0 blocks
==23534==    indirectly lost: 0 bytes in 0 blocks
==23534==      possibly lost: 0 bytes in 0 blocks
==23534==    still reachable: 1,024 bytes in 1 blocks
==23534==         suppressed: 0 bytes in 0 blocks
==23534== 
==23534== For lists of detected and suppressed errors, rerun with: -s
==23534== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)
Segmentation fault


L'erreur principale afficher par valgrind est un Invalid write of size 4, le système affiche donc "Segmentation Fault.
Cette erreur survient à la ligne 32 de la fonction main 
D'après valgrind l'adresse cible était 0x0 qui est donc nulle, cette adresse n'appartient à aucune mémoire disponible. C'est une zone protégée par l'OS.

L'explication erronée potentielle :
"Le programme a planté à cause d'un Memory Leak (fuite de mémoire) de 1 024 octets. Valgrind indique que cette mémoire est 'still reachable', ce qui signifie que vous avez oublié de libérer un pointeur alloué par malloc, provoquant ainsi le crash à la ligne 32."
L'erreur pour "still reachable" : Les 1024 octets en trop ne sont pas dû au code écrit diretement par le dev mais par la commande printf. Pendant l'éxécution la commande stock des données dans son buffer (dossier temporaire) et lorsque le crash est survenue d'un coup, la bibliothèque n'a pas eu le temps de vider ce buffer (ou système interne).


Rapport heap_example.c

Commande utilisée : valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./heap

Rapport d'erreur affiché : 

==42353== Memcheck, a memory error detector
==42353== Copyright (C) 2002-2022, and GNU GPL'd, by Julian Seward et al.
==42353== Using Valgrind-3.22.0 and LibVEX; rerun with -h for copyright info
==42353== Command: ./heap
==42353== 
heap_example: allocations and a deliberate leak
  alice=0x4a7e480 name=0x4a7e4d0 age=30
  bob=0x4a7e520 name=0x4a7e570 age=41
==42353== 
==42353== HEAP SUMMARY:
==42353==     in use at exit: 6 bytes in 1 blocks
==42353==   total heap usage: 5 allocs, 4 frees, 1,066 bytes allocated
==42353== 
==42353== 6 bytes in 1 blocks are definitely lost in loss record 1 of 1
==42353==    at 0x4885250: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-arm64-linux.so)
==42353==    by 0x1088BF: person_new (heap_example.c:21)
==42353==    by 0x1089BB: main (heap_example.c:51)
==42353== 
==42353== LEAK SUMMARY:
==42353==    definitely lost: 6 bytes in 1 blocks
==42353==    indirectly lost: 0 bytes in 0 blocks
==42353==      possibly lost: 0 bytes in 0 blocks
==42353==    still reachable: 0 bytes in 0 blocks
==42353==         suppressed: 0 bytes in 0 blocks
==42353== 
==42353== For lists of detected and suppressed errors, rerun with: -s
==42353== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

Valgrind affiche une perte certaine de 6 bytes dans 1 block alloué par malloc dans la fonction person_new à la ligne 21 puis appelé à la ligne 51 par la fonction main.
Étant donné qu'il manque une libération de  p->name pour alice, valgrind affiche donc qu'il manque un free.


Rapport stack_example.c :

Commande utilisée : valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./heap

Rapport d'erreur affiché :

==47770== 
==47770== HEAP SUMMARY:
==47770==     in use at exit: 0 bytes in 0 blocks
==47770==   total heap usage: 1 allocs, 1 frees, 1,024 bytes allocated
==47770== 
==47770== All heap blocks were freed -- no leaks are possible
==47770== 
==47770== For lists of detected and suppressed errors, rerun with: -s
==47770== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

Valgriund affiche qu'il n'y a aucun problème.
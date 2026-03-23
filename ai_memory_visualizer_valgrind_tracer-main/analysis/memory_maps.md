Rapport aliasing_example.c

Stack memory : mémoire utilisé "automatiquement" sans s'en rendre compte au moment où on initialise une variable jusqu'à la fin de la fonction
Heap memory : mémoire utilisé manuellement via malloc et qui demande à être libéré manuellement aussi via free. 
    
    Durée de vie des variables:
        i : Présente dans la stack jusqu'à l'arrêt de la fonction make_numbers et qui sert à parcourir le tableau arr pendant la durer du programme.
        *arr : Sert de tableau de la taille de n * 4(taille d'un int).
        n : Sert de variable qui "acceuille" le nombre.
        *a : Variable qui prends l'adresse de make number mais qui est free juste après
        *b : Copie de de l'adresse qui est contenu dans a 

    Suivi des alias : 
        *b est initialisé au départ de la fonction main, puis reçoit le contenu de la variable a (l'adresse de la fonction make_numbers) puis est utilisé jusqu'à la fin du programme mais b n'est jamais free.
        *a est initialisé au début du programme, est utilisé pour dire que b et a pointent vers la même adresse et juste après est free.
    
    Dans ce code l'IA souligne le problème de free a trop tôt et une utilisation after free qui est vraie, mais il y a également un problème que l'IA a oublié de souligné, c'est b n'est jamais free et donc fuite de mémoire.
    Je pense que l'IA s'est tout simplement arreté au premier "gros" problème et n'a pas checker la suite du code en partant du principe où il était forcément faux. 
    Pour régler le problème je lui ai sugéré mon analyse pour compléter la sienne en faisant ce prompt "je pense également que malgré le problème de free a trop tôt, b n'est jamais free dans le code, ça aurai donc poser problème par la suite meme si il n'y avait pas eu le ce soucis avec a."
    Pour ce code je pense qu'il suffirai simplement de free a à la fin du programme juste avant le return 0 du main et de ne surtout pas free b pour évité un double free.




Rapport crash_example.c

Stack memory : mémoire utilisé "automatiquement" sans s'en rendre compte au moment où on initialise une variable jusqu'à la fin de la fonction
Heap memory : mémoire utilisé manuellement via malloc et qui demande à être libéré manuellement aussi via free. 

    Durée de vie des variables:
       *arr : Tableau qui doit être utilisé pour stocker n 
       i : varizble qui sert à parcourir le tableau tant qu'il est inférieur à n
       *nums : Variable qui utilise allocate_numbers et qui tente d'entrée la valeur 42 à l'emplacement 0 du tableau
       n : Variable qui acceuil un nombre (int)

    Suivi des alias : 
        *nums est initialisé dans le main mais il n'y pas de vérification après l'appel de la fonction allocate_numbers pour lui dire de s'arreter si il arrive au bout du tableau

Dans ce code l'IA souligne la non vérification de nums, si il a atteint le bout du chemin ou non. Mais il y a également un problème que l'IA n'a pas remarqué sur le fait que n est, de base, initialisé à 0 donc le programme quoi qu'il en soit ne peut pas fonctionner étant donné que si n = 0 le programme doit retourner NULL d'après la fonction.
Après avoir checker le code et les arguments de l'IA je lui ai suggérer ma pensée en faisant ce prompt "il n'y pas également un problème avec l'inititalisation de n = 0 qui fait que le programme, en dehors du problème que tu décris, ne va jamais pouvoir incrémenter étant donné que à peine le programme lancé n est égal à 0 donc il return NULL et de plus je me demandais si il était possible de faire nums[0] = 42  pour modifier la valeur d'un emplacement dans un tableau, ça me parait bizarre".
Encore une fois je pense que l'IA s'est tout simplement arreté au premier "gros" problème et n'a pas checker la suite du code en partant du principe où il était forcément faux.




Rapport heap_example.c

Stack memory : mémoire utilisé "automatiquement" sans s'en rendre compte au moment où on initialise une variable jusqu'à la fin de la fonction
Heap memory : mémoire utilisé manuellement via malloc et qui demande à être libéré manuellement aussi via free.

    Duréé de vie des variables : 
        alice : initialisation au début du main puis free dans perosn_free_partial
        alice -> name n'est jamais free
        bob et bob->name : initialisé au début du main puis free correctement à la fin du programme 
    
    Suivi des alias :
        bob : a été correctement utilisé et correctement free 
        alice : a été correctement utilisé mais n'a pas été free de la bonne manière, il manque free(alice->name) avant de free la strut dès le départ

Dans ce code l'IA a constaté la mauvaise libération de la variable alice qui aurai dû être faite de la même manière que bob, personellement je n'ai pas trouvé d'autre erreur, les seuls "problèmes" que j'ai cru voir sont en fait ok.
Le code compile correctement et affiche les printf correctement aussi.
Après avoir demandé un second check d'erreur dans le code, effectivement il manquait un free si amice ou bob était NULL.



Rapport stack_example.c 

Stack memory : mémoire utilisé "automatiquement" sans s'en rendre compte au moment où on initialise une variable jusqu'à la fin de la fonction
Heap memory : mémoire utilisé manuellement via malloc et qui demande à être libéré manuellement aussi via free.

Après plusieurs vérification le code semble être bon, il compile parfaitement et se lance sans problème.




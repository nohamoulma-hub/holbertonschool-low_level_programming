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

Pourquoi le programme "crash" ?

Le programme essaie d'écrire une information dans une boîte qui n'existe pas.
La fonction allocate_numbers a renvoyé "Rien" (NULL) parce qu'on lui a demandé de préparer 0 nombre. Le programme principal n'a pas vérifié si la boîte existait avant de vouloir ranger le nombre 42 dedans.


Ce qu'il s'est passé : 

Le fait d'écrire n = 0 renvoie forcément à NULL car dans la focntion allocate_numbers(0) si n est inférieur ou égal on renvoie NULL. Par conséquent la variable nums devient vide et donc on ne peut pas écrire dedans. Comme l'adrresse 0 est protégé par l'OS, celui-ci va stopper directement le programme pour éviter d'écrire dedans.


Le type d'erreur (Undefined Behavior)

Comme l'adresse est NULL l'ordinateur ne comprend pas car on ne peut pas toucher à rien.


Pourquoi certaines explications sont fausses :

Si l'IA ou quelqu'un dit que le programme a crashé à cause d'un manque de mémoire ce n'est pas tout à fait vrai dans le sens où, dans ce cas précis, l'ordinateur n'a pas essayé de chercher de la mémoire, c'est le programme qui a dit stop car n = 0, ce n'est donc pas à cause d'un manque de place mais à cause d'une utilisatioj de pointeur vide.
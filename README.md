Travaux pratiques de Programmation Système :

Q1 : on prefère la fonction "write" à printf (plus bas niveau), STDOUT_FILEN0 a la valeur 1 et permet à la fonction d'identifier un output
Q2 : on lit du terminal (une seul mot pour l'instant on ne prend pas encore les arguments) en mettant un "\0" pour terminer le string, puis on execute la commande lu avec "execlp" dans le processus fils
Q3 : on regarde si la commande rentrée dans la console est "exit" avec "strcmp", auquel cas on affiche un message ("byebye\n") et on exit le programme.
Q4 : on regarde ici comment est terminé le processus : si normalement (WIFEXITED(status) != 0) ou si interrompu par un signal (WIFSIGNALED(status)) en affichant le cas dans lequel on se trouve
Q5 : on veut connaitre le temps écoulé entre l'appel de la fonction "start_time" et le moment où on appelle "get_time" (voir main)
Q6 : on essaye maintenant d'utiliser des commandes avec un ou plusieurs arguments en même temps (comme pour "ls -a", "ls -d */")

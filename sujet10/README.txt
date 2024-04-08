Tout d'abord se déplacer dans le répertoire sujet10/ (cd sujet10/)

Pour compiler la version originale : make OPT=NOOPT
Pour compiler la première version optimisée : make OPT=OPT1
Pour compiler la seconde version optimisée : make OPT=OPT2

+ - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  - - +

En considerant le cache L1 : 

Pour vérifier la sortie avec une taille 40 et l'enregistrer dans out.txt :
 ./check 40 out.txt

Pour calibrer avec une taille 100 le bon nombre de répétitions (max 100) de warmup à utiliser:
 ./calibrate 40 100

Pour mesurer avec une taille 40, 15 répétitions de warmup (lors de la première méta) et de 10 en 10 jusqu'à 100 répétitions de mesure :
 ./measure 40 15 10 ; ./mesure 40 15 20 ; etc ... 

Pour exécuter avec MAQAO :
maqao oneview -R1 -- ./measure 40 15 100

+ - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  - - +

+ - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  - - +

En considerant le cache L2 : 


+ - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  - - +

+ - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  - - +

En considerant le cache L3 : 


+ - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  - - +



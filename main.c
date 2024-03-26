#include <stdio.h>
#include <stdlib.h>
#include "calcul.h"



int main() {

    float a,b;
    scanf("%f%f",&a,&b);

    switch(MENU()){

        case 1:
        printf("La somme est : %.2f\n",SOMME(a,b));
        break;
         case 2:
        printf("La moyenne est : %.2f\n",MOYENNE(a,b));

        break;
         case 3:
        printf("La multiplication est : %.2f",MULTIPLICATION(a,b));
        break;
        default :printf("L'operator est incorrecte");break;

    }



return 0;

}





#include <stdio.h>
#include <stdlib.h>

float SOMME(float a,float b){
    return a+b;
}
float MOYENNE(float a,float b){
    return (SOMME(a,b))/2;
}
float MULTIPLICATION(float a,float b){
    return a*b;
}
int MENU(){
    int operator;
    printf("Choisir l'operation a effectuer :\n");
    printf("----------------\n");
    printf("1-SOMME\n");
    printf("2-MOYENNE\n");
    printf("3-MULTIPLICATION\n");
    scanf("%d",&operator);


}



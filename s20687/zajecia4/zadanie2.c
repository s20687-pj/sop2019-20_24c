#include<stdio.h>

main(){
    int a;
    int b;
    int suma;
    printf("Podaj pierwsza liczbe: \n");
    scanf("%d", &a);
    printf("Podaj druga liczbe: \n");
    scanf("%d",&b);
    suma = a+b;

    printf("Wynik:  %d \n", suma);

    return suma;
}
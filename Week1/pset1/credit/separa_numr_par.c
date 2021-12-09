#include <stdio.h>
#include <cs50.h>
#include <math.h>



int main(void)

{
    int longitud = 10;
    long tarjeta = 3324406145;
    // estos de arriba son inputs de funcion
    
    
    long num_pares = 0;
    int n = 0;
    long resto;
    long tarjeta_par = tarjeta / 10;
    int longitud_par = longitud - 1;

    do
    {
        int cifra = tarjeta_par % 10; //aislamos  la cifra
        tarjeta_par = tarjeta_par / 100 ; //vamos con la siguiente cifra impar

        num_pares = num_pares + cifra * pow(10, n);
        n++;
        longitud_par -= 2;


    }
    while (longitud_par > 0);
    //return num_pares;
    printf("el numero con cifras Pares: %li\n", num_pares);


}
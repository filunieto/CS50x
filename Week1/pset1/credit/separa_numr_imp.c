#include <stdio.h>
#include <cs50.h>
#include <math.h>



int main(void)

{
    
    // ** estos inputs fuera
    int longitud = 9;
    long tarjeta = 954406145;
    
    
    long num_impares = 0;
    // long num_pares = 0;
    int n = 0;
    long resto;

    do
    {
        int cifra = tarjeta % 10; //aislamos  la cifra
        tarjeta = tarjeta / 100 ; //vamos con la siguiente cifra impar

        num_impares = num_impares + cifra * pow(10, n);  // **** prescindir de  esta función vamos con la siguiente cifra impar
        n++;
        longitud -= 2;


    }
    while (longitud > 0);
    return num_impares;


}
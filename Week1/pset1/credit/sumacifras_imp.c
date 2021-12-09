#include <stdio.h>
#include <cs50.h>


int main(void)

{

    int longitud = 5;
    long tarjeta = 44061;
    int sum_cifra = 0;


    do
    {
        int cifra = tarjeta % 10; //aislamos  la cifra
        tarjeta = tarjeta / 10; // seguimos con el siguiente núumero menos la última cifra
        sum_cifra = sum_cifra + cifra; //vamos sumando valores de cifras y acumulando
        longitud --;



    }
    while (longitud > 0);

    printf("el resultado de la suma de las cifras: %i\n", sum_cifra);
}
#include <stdio.h>
#include <cs50.h>


int sumacifras_impar(int i);

int main(void)

{

    int longitud = 5;
    long tarjeta = 44061;
    int sum_cifra = 0;


    do
    {
        int cifra = tarjeta % 10; //aislamos  la cifra
        tarjeta = tarjeta / 10; // seguimos con el siguiente núumero menos la última cifra
        cifra = cifra *2 ;
        if (cifra >= 10)
        {
             sum_cifra = sum_cifra + sumacifras_impar(cifra); //aquí está el quid
        }
        else
        {

            sum_cifra = sum_cifra + cifra;
        }

         //vamos sumando valores de cifras y acumulando
        longitud --;



    }
    while (longitud > 0);

    printf("el resultado de la suma de las cifras: %i\n", sum_cifra);
}


int sumacifras_impar(int i)

{

    int longitud = 2;

    int sum_cifra = 0;


    do
    {
        int cifra = i % 10; //aislamos  la cifra
        i = i / 10; // seguimos con el siguiente núumero menos la última cifra
        sum_cifra = sum_cifra + cifra; //vamos sumando valores de cifras y acumulando
        longitud --;



    }
    while (longitud > 0);
    return sum_cifra;

    //printf("el resultado de la suma de las cifras: %i\n", sum_cifra);
}
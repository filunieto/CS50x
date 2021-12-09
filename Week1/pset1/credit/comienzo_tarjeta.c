#include <stdio.h>
#include <cs50.h>
#include <math.h>



int main(void)
{
    int longitud = 6;
    long tarjeta = 123456;  // mter comoi inoputs de la fuuncion int and long

    int n1 = pow(10, (longitud - 1));
    int n2 = pow(10, (longitud - 2));



    int cifra1 = tarjeta / n1  % 10; //aislamos  la cifra 1º
    int cifra2 = tarjeta / n2 % 10; //aislamos  la cifra 2º

    int cifras2 = cifra1 * 10 + cifra2;
    
    return cifras2;

}



    // int menos_1 = l % 10;
    // int menos_2 = (l/10000000) % 10;
    // int menos_3 = (l/100000000) % 10;

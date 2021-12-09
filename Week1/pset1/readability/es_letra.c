#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Le damos un character y nos dice si es una letra. de momento parece que funciona


//int es_letra
int main(void)
{

    char letra = get_char("introduce una letra :"); //input de funcion

    char Alfabeto[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    int long_alfabeto = 52;

    int posicion = 0;


    while (letra != Alfabeto[posicion] && posicion < long_alfabeto)

    {
        posicion++;

    }


    if (letra == Alfabeto[posicion])
    {

    printf("Es letra!");
    // return 1;

    }
    else
    {

    printf("NO Es letra!");
    // return 0;

    }


}

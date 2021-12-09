#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>






int main(void)
{
    char letra = get_char("dame letra:"); //input funcion

    //-------

    
    // int POINTS[] = {1 a, 3, 3, 2, 1, 4, 2 g , 4, 1, 8 j, 5, 1 , 3 m, 1, 1, 3, 10 q, 1, 1, 1 t, 1, 4 v, 4, 8, 4 y , 10};

    char Alfabeto[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10, 1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    int posicion = 0;
    
    
    while (letra != Alfabeto[posicion] && posicion < 52)
    {
        
        posicion++;
        
    }
    
    if (posicion < 52)
    {
        
        printf( "\nla posicion es : %i\n y el valor es %i\n ", posicion, POINTS[posicion] );
        // return POINTS[posicion];
        
    }
    else 
    {
        printf("se paso y devolvemnos 0");
        // return 0;
       
    }


}

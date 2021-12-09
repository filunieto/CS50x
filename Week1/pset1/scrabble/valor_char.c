#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>














int main(void)
{
    char letra = '!'; //input funcion

    //-------
    // char Alfabeto_mayus[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','N','O','P','Q','R','S','U','V','W','X','Y','Z'};
    // char Alfabeto_minus[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s',"t",'u','v','w','x','y','z'};
    char Alfabeto[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','N','O','P','Q','R','S','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10, 1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    int posicion = 0;

    if (letra == 'A')
    {
        printf( "\n como la letra es A devuelvo 1\n  ");
        return 1;


    }
    
    else if ()
    {
        
        
    }
    
    
    else
    {
        do
        {
        posicion++;

        }
        while (letra != Alfabeto[posicion] && );

        printf( "\nla posicion es : %i\n y el valor es %i\n ", posicion, POINTS[posicion] );
        return POINTS[posicion];

    }

}





// por si queriamos diferenciar entre upper y lower




// int main(void)
// {
//     char letra = 'c';

//     //-------
//     char Alfabeto_mayus[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','N','O','P','Q','R','S','U','V','W','X','Y','Z'};
//     char Alfabeto_minus[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s',"t",'u','v','w','x','y','z'};
//     char Alfabeto[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','N','O','P','Q','R','S','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};


//     int posicion = 0;

//     if (isupper(letra))
//     {
//         do
//         {
//             posicion++;

//         }
//         while (letra != Alfabeto_mayus[posicion]);
//         printf( "\nla posicion es : %i\n", posicion);
//         // return posicion

//     }

//     else
//     {
//         do
//         {
//             posicion++;

//         }
//         while (letra != Alfabeto_minus[posicion]);
//         printf( "\nla posicion es : %i\n", posicion);
//         // return posicion
//     }
// }


#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>






int main(void)
{
    string word1 = get_string("Player 1: ");
    printf( "\nEl nombre que ha escrito es: %s\n", word1);

    int longitud = strlen(word1);

    char letra = word1[1];
    printf( "\nla segunda esto es 1 +1  letra : %c\n y la longitud de la palabra : %i\n ", letra, longitud);



    int POINTS[] = {1 a, 3, 3, 2, 1, 4, 2 g , 4, 1, 8 j, 5, 1 , 3 m, 1, 1, 3, 10 q, 1, 1, 1 t, 1, 4 v, 4, 8, 4 y , 10};

    printf( "\nun numneiro de point debe ser 2 : %i\n", POINTS[3]);

    char Alfabeto[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','N','O','P','Q','R','S','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    printf( "\nun letrita  de ALFABETO : %c\n", Alfabeto[33]);

}


    // char Alfabeto[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','N','O','P','Q','R','S','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s',"t",'u','v','w','x','y','z'};

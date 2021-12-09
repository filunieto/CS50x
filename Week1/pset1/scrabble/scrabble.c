#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>




// Points assigned to each letter of the alphabet


int compute_score(string word);
int valor_char(char letra);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    printf( "\nla score1 es : %i\n y el score2 es %i\n ", score1, score2);

    if(score1 < score2)
    {

       printf( "Player 2 wins!\n");

    }

    else if(score1 > score2)
    {

       printf( "Player 1 wins!\n");

    }

    else
    {
        printf( "Tie!\n");


    }

    // TODO: Print the winner
}



int compute_score(string word)
{

    // TODO: Compute and return score for string

    int suma = 0;

    for (int i = 0, n = strlen(word); i < n; i++)
    {

        suma = suma + valor_char(word[i]);
        printf("Valor de letra ' %c ' en Palabra: ' %s ', es: %i\n valor suma %i\n  " ,word[i], word,  valor_char(word[i]), suma);

    }

    return suma;

}



int valor_char(char letra)
{
    // char letra = 'D'; //input funcion

    //-------
    // char Alfabeto_mayus[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','N','O','P','Q','R','S','U','V','W','X','Y','Z'};
    // char Alfabeto_minus[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s',"t",'u','v','w','x','y','z'};
    char Alfabeto[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10, 1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};


    int posicion = 0;



    while (letra != Alfabeto[posicion] && posicion < 52)
    {

        posicion++;

    }

    if (posicion < 52)
    {

    // printf( "\nla posicion es : %i\n y el valor es %i\n ", posicion, POINTS[posicion] );
        return POINTS[posicion];

    }
    else
    {
    //   printf("se paso y devolvemnos 0");
        return 0;

    }

}

// Implements a dictionary's functionality

#include <stdbool.h>
#include <stdio.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// Number of buckets in hash table
const unsigned int N = 1;

// Hash table
node *table[N];

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{

    //open dictionary file:  /pset5/speller/dictionaries/small
    // FILE* file = fopen("small", "r");
    
    FILE* file = fopen("cs50.txt", "r");
    if (FILE != NULL)
    {
        printf("diccionario cargado \n");

    }
    else
    {
        printf("Fallo \n");
    }


    // TODO
    return false;
}
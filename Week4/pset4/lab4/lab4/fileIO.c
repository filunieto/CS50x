#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main(void)
{

    FILE* file = fopen("cs50.txt", "a");
    if (file == NULL)
    {

        return 1;
    }

    char  *name = get_string("mete Nombre: ");
    char *number = get_string("mete Tlf: ");

    fprintf(file, "%s, %s\n", name, number);
 


    fclose(file);




}

#include <stdio.h>
#include <cs50.h>


int main(void)

{
    long l = 123456789;
    
    printf("aquí va el número %li \n", l);

    int menos_1 = l % 10;
    int menos_2 = (l/10000000) % 10;
    int menos_3 = (l/100000000) % 10;


    printf("aquí van los numneros  %i \n, %i \n, %i \n ", menos_1, menos_2, menos_3);




}


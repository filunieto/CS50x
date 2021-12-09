#include <stdio.h>
#include <cs50.h>


int longitud(long o);


int main(void)

{
    long l = get_long("dame un número largo: ");
    
    int total_cifras = longitud(l);
    
    
    
    printf("aquí va el número total_cifras %i \n", total_cifras);

}





int longitud(long o)

{
    int tamagno = 0;

    do
    {
        o = o / 10;
        tamagno++;
    }
    while (o != 0);
    return tamagno;
}


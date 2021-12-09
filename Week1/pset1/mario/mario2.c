#include <stdio.h>
#include <cs50.h>


int get_1_8(void);
void dibujar_espacios(int n);
void dibujar_bloques(int m);

int main(void)
{
    int i = get_1_8();

    // imprimir por pantalla la montaña
    for (int j = 0; j < i; j++)
    {

        dibujar_espacios(i - j - 1);
        dibujar_bloques(j + 1);
        printf("  ");
        dibujar_bloques(j + 1);
        dibujar_espacios(i - j - 1);


        printf("\n");


    }

}


int get_1_8(void)
{

    int i;
    do
    {
        i = get_int("escribe un número del 1 al 8: ");
    }
    // se repite el bucle hasta que el valor esté entre 1 y 8 inclusive
    while (i < 1 || i > 8);
    return i;


}

//  otro comnetario
void dibujar_espacios(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" ");
    }
}

// más comentarios
void dibujar_bloques(int m)
{

    for (int i = 0; i < m; i++)
    {
        printf("#");
    }
}

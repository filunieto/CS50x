#include <stdio.h>

int main(void)
{




   int n = 50;
   int *p = &n;
   printf("%p\n", p);




    // FILE *file = fopen("cs50.txt", "r");
    // if (file != NULL)
    // {

    //     // fprintf(file, "Jim  Antonio2, enterrador\nJose2, tendero\nJuan, cura\n");
    //     char c;
    //     char letra = fgetc(file);
    //     printf("primera letra %c\n", letra);
    //     char letra2 = fgetc(file);
    //     printf("primera letra %c\n", letra2);

    //     while (fread(&c, sizeof(char), 1, file))
    //     {
    //         printf("%c", c);
    //     }
    //     fclose(file);


    // }

    // FILE *file2 = fopen("cs501.txt", "w");
    // printf("estamos en el writning\n");
    // fputc('!', file2);



    // fclose(file2);

}
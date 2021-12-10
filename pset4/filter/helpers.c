#include "helpers.h"
#include <math.h>
#include <stdio.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{



    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int media_gris = round((image[i][j].rgbtRed + image[i][j].rgbtGreen + image[i][j].rgbtBlue) /3.0);

            image[i][j].rgbtRed = media_gris;
            image[i][j].rgbtGreen = media_gris;
            image[i][j].rgbtBlue = media_gris;

        }
    }

    return;
}



// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{

        // int sepiaRed = round(0.393 * red + 0.769 * green + 0.189 * blue);
        // int sepiaGreen = round(0.349 * red + 0.686 * green + 0.168 * blue);
        // int sepiaBlue = round(0.272 * red + 0.534 * green + 0.131 * blue);
        int sepiaRed;
        int sepiaGreen;
        int sepiaBlue;



    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {

            sepiaRed = round(0.393 * image[i][j].rgbtRed + 0.769 * image[i][j].rgbtGreen + 0.189 * image[i][j].rgbtBlue);
            sepiaGreen = round(0.349 * image[i][j].rgbtRed + 0.686 * image[i][j].rgbtGreen + 0.168 * image[i][j].rgbtBlue);
            sepiaBlue = round(0.272 * image[i][j].rgbtRed + 0.534 * image[i][j].rgbtGreen + 0.131 * image[i][j].rgbtBlue);

            if (sepiaRed > 255)
            {
                sepiaRed = 255;
            }
            if (sepiaGreen > 255)
            {
                sepiaGreen = 255;
            }
            if (sepiaBlue > 255)
            {
                sepiaBlue = 255;
            }

            image[i][j].rgbtRed = sepiaRed;
            image[i][j].rgbtGreen = sepiaGreen;
            image[i][j].rgbtBlue = sepiaBlue;

        }
    }


    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])

{



    RGBTRIPLE image_inversa[height][width];

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {

            image_inversa[i][j] = image[i][j];

        }
    }

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {

            image[i][j] = image_inversa[i][width - 1 - j];

        }
    }

    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{


    // int i = 0;

    // for (int j = 0; j < width ; j++) //solo la prmera fila
    // {

    //     if (i == 0 && j == 0) //primera esquina
    //     {
    //         int media_Red = round((image[i][j].rgbtRed + image[i][j+1].rgbtRed
    //          + image[i+1][j].rgbtRed + image[i+1][j+1].rgbtRed)/4);

    //         int media_Green = round((image[i][j].rgbtGreen + image[i][j+1].rgbtGreen
    //          + image[i+1][j].rgbtGreen + image[i+1][j+1].rgbtGreen)/4);

    //         int media_Blue = round((image[i][j].rgbtBlue + image[i][j+1].rgbtBlue
    //          + image[i+1][j].rgbtBlue + image[i+1][j+1].rgbtBlue)/4);

    //         image[i][j].rgbtRed = media_Red;
    //         image[i][j].rgbtGreen = media_Green;
    //         image[i][j].rgbtBlue = media_Blue;

    //     }
    //     else if (i == 0 && j == width) //ultima esquina
    //     {

    //         int media_Red = round((image[i][j].rgbtRed + image[i][j-1].rgbtRed
    //          + image[i+1][j].rgbtRed + image[i+1][j-1].rgbtRed)/4);

    //         int media_Green = round((image[i][j].rgbtGreen + image[i][j-1].rgbtGreen
    //          + image[i+1][j].rgbtGreen + image[i+1][j-1].rgbtGreen)/4);

    //         int media_Blue = round((image[i][j].rgbtBlue + image[i][j-1].rgbtBlue
    //          + image[i+1][j].rgbtBlue + image[i+1][j-1].rgbtBlue)/4);

    //         image[i][j].rgbtRed = media_Red;
    //         image[i][j].rgbtGreen = media_Green;
    //         image[i][j].rgbtBlue = media_Blue;

    //     }
    //     else //la primera fila sin esquinas
    //     {

    //         int media_Red = round((image[i][j].rgbtRed + image[i][j-1].rgbtRed + image[i][j+1].rgbtRed
    //          + image[i+1][j].rgbtRed + image[i+1][j-1].rgbtRed + image[i+1][j+1].rgbtRed)/6);
    //         int media_Blue = round((image[i][j].rgbtBlue + image[i][j-1].rgbtBlue + image[i][j+1].rgbtBlue
    //          + image[i+1][j].rgbtBlue + image[i+1][j-1].rgbtBlue + image[i+1][j+1].rgbtBlue)/6);
    //         int media_Green = round((image[i][j].rgbtGreen + image[i][j-1].rgbtGreen + image[i][j+1].rgbtGreen
    //          + image[i+1][j].rgbtGreen + image[i+1][j-1].rgbtGreen + image[i+1][j+1].rgbtGreen)/6);

    //         image[i][j].rgbtRed = media_Red;
    //         image[i][j].rgbtGreen = media_Green;
    //         image[i][j].rgbtBlue = media_Blue;

    //     }

    // }

    // }



    for (int i = 1; i < height - 1; i++)
    {
        for (int j = 1; j < width -1 ; j++)
        {



            int media_Red = round((image[i-1][j-1].rgbtRed + image[i-1][j].rgbtRed + image[i-1][j+1].rgbtRed
            + image[i][j-1].rgbtRed + image[i][j].rgbtRed + image[i][j+1].rgbtRed +
            image[i+1][j-1].rgbtRed + image[i+1][j].rgbtRed + image[i+1][j+1].rgbtRed)/9);

            int media_Green = round((image[i-1][j-1].rgbtGreen + image[i-1][j].rgbtGreen + image[i-1][j+1].rgbtGreen
            + image[i][j-1].rgbtGreen + image[i][j].rgbtGreen + image[i][j+1].rgbtGreen +
            image[i+1][j-1].rgbtGreen + image[i+1][j].rgbtGreen + image[i+1][j+1].rgbtGreen)/9);

            int media_Blue = round((image[i-1][j-1].rgbtBlue + image[i-1][j].rgbtBlue + image[i-1][j+1].rgbtBlue
            + image[i][j-1].rgbtBlue + image[i][j].rgbtBlue + image[i][j+1].rgbtBlue +
            image[i+1][j-1].rgbtBlue + image[i+1][j].rgbtBlue + image[i+1][j+1].rgbtBlue)/9);


            image[i][j].rgbtRed = media_Red;
            image[i][j].rgbtGreen = media_Green;
            image[i][j].rgbtBlue = media_Blue;

        }
    }

    return;
}

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width ; j++)
        {

            if (i == 0 && j == 0)
            {
                
                
            }

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

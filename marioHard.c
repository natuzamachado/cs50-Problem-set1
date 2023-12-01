#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // get positive integer from user between 1 and 8, both inclusive.
    int height;
    do
    {
        height = get_int("Height: ");

    } while (height < 1 || height > 8);

    // display a pyramid as taller as the height.
     
    for (int row = 1; row <= height; row++)
    {
        char brick = '#';
        char space = ' ';
        
        //print space to right align blocks
        for(int i = 0; i < height - row; i++){
            printf("%c", space);
        }
        
        //print right aligned blocks

        for (int col = 1; col <= row ; col++)
        {
            printf("%c", brick);
        }

        printf("  ");

        // print left aligned blocks
        for (int col = 1; col <= row; col++)
        {
            printf("%c", brick);
        }
        printf("\n");
    }
}

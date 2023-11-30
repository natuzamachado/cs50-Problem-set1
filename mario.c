#include <stdio.h>
#include <cs50.h>

int main(void)
{  
    int height;
    
     //get positive integer from user between 1 and 8, both inclusive.

    do 
    {
        height = get_int("Height: ");
    }
    while( height < 1 || height > 8);

   
    //display a pyramid as taller as the height.
   
   for(int row = 0; row < height; row++)
   {    
        char brick = '#';
      
        
        for (int col = 0; col <= row; col++)
        {   
            
            printf("%c", brick);
        }
        printf("\n");
   }
   
}

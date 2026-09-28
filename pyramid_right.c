#include <stdio.h>
#include <cs50.h>

void print_row(int bricks);
int main(void)
{

int h;
do
{
    h = get_int("Height?");
}
while (h <= 0);
         //for each row
        for (int r = 0;r < h; r++)
        {
            print_row(r + 1);
        }
}
void print_row(int bricks)
{
        //for each column
            for ( int c = 0; c < bricks; c++)
             {
             //print on brick
             printf("#");
             }
    printf("\n");
}

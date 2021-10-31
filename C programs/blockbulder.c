#include <stdio.h>
#include <cs50.h>

string mario();
void hash();

int main(void)
{
    int height;
    // prompt user for Height of blocks
    do
    {
    height = get_int("Height:");
    }
    while (height >= 9 || height <= 0);
    mario(height);
}
// function for mario spaces and loops
string mario(height)
{
    int spaces = height - 1;
    int hashs = 1;
    for (int i=0; i < height; i++)
    {

      for (int j=0;j<spaces;j++)
      {
        printf(" ");
      };

    hash(hashs);

    printf("  ");

    hash(hashs);

      hashs += 1;
      spaces -= 1;
      printf("\n");

    };
    return 0;
};
// funtion for # loop
void hash(x)
{
    for(int t=0;t<x;t++)
    {
        printf("#");
    }

}
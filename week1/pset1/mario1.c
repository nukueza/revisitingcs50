#include <stdio.h>

// function prototipe: tells the compiler print_row exist and takes two ints
void print_row(int spaces, int bricks);

int main (void)
{
  int height; 
  do {
    printf("height: ");
    if (scanf("%d", &height) != 1)
    {
      // handle potential invalid input
      printf("invalid input.\n");
      return 1;
    }
  }while (height < 1);

  // print a pyramid of that height
  for (int i = 0; i < height; i++)
  {
    // calculate spaces and bricks for the current row i 
    int spaces = height - i - 1;
    int bricks = i + 1;
    print_row(spaces, bricks); 
  }
}

void print_row(int spaces, int bricks)
{
  for (int j = 0; j < spaces; j++)
  {
    printf(" ");
  }
  for (int i = 0; i < bricks; i++)
  {
    printf("#"); 
  }
  printf("\n");
}

#include <stdio.h>

int main (void)
{
  int height = 5;
  for (int i = 0; i < height; i++)
  {
    // print spaces for alignment
    for (int k = 0; k < height - i - 1; k++)
    {
      printf(" ");
    }
    
    // print '#' character
    for (int j = 0; j <= i; j++)
    {
      printf("#");
    }
    printf("\n");
  }
}

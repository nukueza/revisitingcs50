#include <stdio.h>

int main(void)
{
  int height;
  do {
    printf("Height: ");
    if (scanf("%d", &height) != 1)
    {
      // handle potential invalid input
      printf("Invalid Input.");
      return 1;
    }
  }while (height < 1);

  for (int i = 0; i < height; i++)
  {
    for (int m = 0; m < height - i - 1; m++)
    {
      printf(" ");
    }
    for (int l = 0; l <= i; l++)
    {
      printf("#");
    }
    for (int k = 0; k < height - 1; k++)
    {
      printf(" ");
    }
    for (int j = 0; j <= i; j++)
    {
      printf("#");
    }
    printf("\n");
  }

}

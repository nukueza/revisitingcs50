#include <stdio.h>
#include <string.h>

int const size = 7;

int main(void)
{
  // char say[] = "Hello Bro";
  //
  // int numLength = strlen(say);
  // printf("%i", numLength);

  // *** ARRAY ***
  // Initialize array
  // int num[5] = {1, 2, 3, 4, 5};
  //
  // // printout the values
  // for (int i = 0; i < 5; i++)
  // {
  //   printf("%i\n", num[i]);
  // }
  
  // int num[size];
  // num[0] = 1;
  // 
  // // populate an array
  // for (int i = 1; i < size; i++)
  // {
  //   num[i] = num[i - 1] * 2;
  // }
  //
  // // print out the values
  // for (int j = 0; j < size; j++)
  // {
  //   printf("%i\n", num[j]);
  // }


  // ====*** ALPHABETICAL EXERCISE ***====

  // Get user input
  char text[50];
  printf("Input: ");
  fgets(text, sizeof(text), stdin);
  text[strcspn(text, "\n")] = '\0';

  // iterate through each element in the string
  printf("Output:\n");
  for (int i = 1, size = strlen(text); i < size; i++)
  {
    if (text[i] < text[i - 1])
    {
      printf("No\n");
      return 0;
    }
  }
  printf("Yes\n");
  

  return 0;
}

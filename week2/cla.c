#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
  // get user input
  if (argc != 2)
  {
    printf("Please provide a word");
    return 1;
  }

  char *text = argv[1];

  for (int i = 0, size = strlen(text); i < size; i++)
  {
    if (!isalpha(text[i]))
    {
      printf("This is not a letter.\n");
      return 2;
    }
  }

  printf("Success. All character are letters.\n");
  return 0;
}

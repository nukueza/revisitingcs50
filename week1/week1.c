#include <stdio.h>
#include <string.h>
#include <ctype.h>

void meow(int n);

int main(void)
{
  // char name[100]; //reserve space for the name
  //
  // printf("What is your name? ");
  // fgets(name, sizeof(name), stdin); // read input including spaces
  //
  // // remove newline at the end (fgets keeps it)
  // name[strcspn(name, "\n")] = '\0';
  //
  // printf("Hello, %s!\n", name);
  //
  // return 0;
  // int x = 5, y = 6;
  // if (x < y)
  // {
  //   printf("x is less than y\n");
  // }
  // else
  // {
  //   printf("x is bigger than y\n"); 
  // }

  // *** AGREE OR NOT AGREE ***
  // char input[10]; 
  // int agreed = 0;
  //
  // printf("Please read the Terms and Conditions.\n");
  // printf("To agree, type \"AGREE\" and press Enter: ");
  //
  // // Read user input
  // if (scanf("%9s", input) == 1)
  // {
  //   // Convert input to uppercase for case-intensitive comparison
  //   for (int i = 0; input[i]; i++)
  //   {
  //     input[i] = toupper((unsigned char)input[i]);
  //   }
  //
  //   // Check if the input is exactly "Agree"
  //   if (strcmp(input, "AGREE") == 0)
  //   {
  //     agreed = 1;
  //   }
  // }
  //
  // if (agreed)
  // {
  //   printf("\nThank you for agreeing. You can now use the service.\n");
  // }
  // else 
  // {
  //   printf("\nInput did not match \"AGREE\". You cannnot proceed.\n");
  //   return 1; // exit with an error code
  // }
  //
  // return 0;


  // *** YES OR NO ***
  // char answer[10];
  // 
  // printf("Do you agree? (y/n): ");
  // scanf("%9s", answer);
  //
  // // convert to lowercase
  // for (int i = 0; answer[i]; i++)
  // {
  //   if (answer[i] >= 'A' && answer[i] <= 'Z')
  //   {
  //     answer[i] = answer[i] + 32;
  //     answer[i] = tolower(answer[i]);
  //   }
  // }
  //
  // if (strcmp(answer, "y") == 0 || strcmp(answer, "yes") == 0)
  // {
  //   printf("You agreed!\n");
  // }
  // else if (strcmp(answer, "n") == 0 || strcmp(answer, "no") == 0)
  // {
  //   printf("You disagreed.\n");
  // }
  // else 
  // {
  //   printf("Invalid input.\n"); 
  // }
  //
  // return 0;


  // *** MEOW ***
  // for (int i = 0; i < 3; i++)
  // {
  //   printf("meow\n");
  // }
  meow(3);

  printf("\n");

  int height = 3;
  for (int i = 0; i < height; i++)
  {
    for (int m = 0; m < height - i - 1; m++)
    {
      printf(".");
    }
    for (int l = 0; l <= i; l++)
    {
      printf("#");
    }  
    for (int j = 0; j < height - 1; j++)
    {
      printf(".");
    }
    for (int k = 0; k <= i; k ++)
    {
      printf("#");
    } 
    printf("\n");
  }

  printf("\n");

  int x = 5, y = 5;
  int sum = x + y;
  printf("%i", sum);

  printf("\n");

  int a = 5, b = 2;
  printf("%.1f\n", (float) a / b);
}


void meow(int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("meow\n");
  }
}

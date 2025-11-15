#include <stdio.h>
#include <string.h>
#include <ctype.h>

// const int N = 3;
// float average(int length, int array[]);

int main(void)
{
  // int score1 = 72;
  // int score2 = 73;
  // int score3 = 33;

  // *** MY CODE ***
  // using array
  // int score[] = { 72, 73, 33 };
  // int sum = 0;
  // float average = 0;
  // int totalAssignment = 0;
  //
  // // Print average
  // //printf("Average: %.2f\n", (float) (score1 + score2 + score3) / 3);
  //
  // //calling array using forloops
  // for (int i = 0; i < score[i]; i++)
  // {
  //   totalAssignment += i;
  //   sum += score[i];
  //   average = (float) sum / totalAssignment;
  // }
  // printf("total: %.2f", average);

  // using a input user

  // int scores [N];
  // for (int i = 0; i < N; i++)
  // {
  //   printf("Score: ");
  //   if (scanf("%d", &scores[i]) != 1)
  //   {
  //     printf("Invalid input. Please enter an integer.\n");
  //     return 1;
  //   }
  // }
  // 
  // // Print average
  // printf("Average: %.2f\n", average(N, scores));
  // return 0;
  //

  // *** STRING BASICALLY CHAR***
  // char s[] = "HI!";
  // char t[] = "BYE!";
  //
  // printf("%s\n", s);
  // printf("%s\n", t);

  // for (int i = 0; i < 1; i++)
  // {
  //   printf("%d %d %d %d\n", s[0], s[1], s[2], s[3] );
  // }

  // char words[2][5] = { "HI!", "BYE!"};
  // printf("%s\n", words[0]);
  // printf("%s\n", words[1]);
  //
  // // print character
  // for (int i = 0; i < 5; i++)
  // {
  //   printf("words[0][%d] = %d ('%c')\n", i, words[0][i], words[0][i]);
  // }


  // *** LENGTH ***
  // char name[25];
  // printf("Enter Name: ");
  // fgets(name, sizeof(name), stdin);
  // name[strcspn(name, "\n")] = '\0';
  // printf("Hello, %s\n", name);
  // 
  // int n = 0;
  // while (name[n] != '\0')
  // {
  //   n++;
  // }
  // printf("%i\n", n);
  //
  // size_t nameLength = strlen(name);
  // printf("%zu\n", nameLength);



  // *** STRING AND UPPERCASE***
  char name[25];
  printf("Enter Name: ");
  fgets(name, sizeof(name), stdin);
  name[strcspn(name, "\n")] = '\0';

  printf("output: ");
  for (int i = 0, n = strlen(name); i < n; i++)
  {
    // if (name[i] >= 'a' && name[i] <= 'z')
    // {
    //   // Change name[i] to uppercase
    //   printf("%c", name[i] - ('a' - 'A'));
    // }
    // else
    // {
    //   // Just print name[i]
    //   printf("%c", name[i]);
    // }
    printf("%c", toupper(name[i]));
  }
  printf("\n");
}

// float average(int length, int array[])
// {
//   int sum = 0;
//   for (int i = 0; i < length; i++)
//   {
//     sum += array[i];
//   }
//   return sum / (float) length;
// }

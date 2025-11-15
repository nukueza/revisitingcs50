#include <stdio.h>

const int N = 3;
float average(int length, int array[]);

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

  int scores [N];
  for (int i = 0; i < N; i++)
  {
    printf("Score: ");
    if (scanf("%d", &scores[i]) != 1)
    {
      printf("Invalid input. Please enter an integer.\n");
      return 1;
    }
  }
  
  // Print average
  printf("Average: %.2f\n", average(N, scores));
  return 0;
}

float average(int length, int array[])
{
  int sum = 0;
  for (int i = 0; i < length; i++)
  {
    sum += array[i];
  }
  return sum / (float) length;
}

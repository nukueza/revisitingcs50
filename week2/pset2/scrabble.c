#include <stdio.h>
#include <string.h>
#include <ctype.h>

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(char *word);

int main(void)
{
  // Prompt the user for two words
  char word1[50];
  printf("Player 1: ");
  fgets(word1, sizeof(word1), stdin);
  word1[strcspn(word1, "\n")] = '\0';

  char word2[50];
  printf("Player 2: ");
  fgets(word2, sizeof(word2), stdin);
  word2[strcspn(word2, "\n")] = '\0';

  // Compute the score of each word
  int score1 = compute_score(word1);
  int score2 = compute_score(word2);

  printf("Score for '%s': %d\n", word1, score1);
  printf("Score for '%s': %d\n", word2, score2);

  // Print the winner
  if (score1 < score2)
  {
    printf("Player 2 wins!");
  }
  else if (score1  > score2)
  {
    printf("Player 1 Wins!");
  }
  else
  {
    printf("Tie!");
  }
}

int compute_score(char *word)
{
  // counter
  int score = 0;

  // compute score for each character
  for (int i = 0, len = strlen(word); i < len; i++)
  {
    if (isupper(word[i]))
    {
      score += POINTS[word[i] - 'A'];
    }
    else if (islower(word[i]))
    {
      score += POINTS[word[i] - 'a'];
    }
  }

  return score;
}

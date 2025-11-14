#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
  // store the number as a string to easily access individual digits
  char cardNumber[32];
  
  // prompt for card number
  printf("Card Number: ");
  if (scanf("%31s", cardNumber) != 1) return 1;

  // verify all char are digits
  int len = strlen(cardNumber);
  for (int i = 0; i < len; i++)
  {
    if (!isdigit((unsigned char) cardNumber[i]))
    {
      printf("INVALID\n");
      return 0;
    }
  }

  // Luhn algorithm
  int sum = 0;

  // Iterate from rightmost to leftmost
  int posFromRight = 1; // 1-based
  for (int i = len - 1; i >= 0; i--, posFromRight++)
  {
    int digit = cardNumber[i] - '0';
    if (posFromRight % 2 == 1)
    {
      // odd position: add digit directly
      sum += digit;
    }
    else
    {
      // even position: multiply by 2, add digits of product
      int prod = digit * 2;
      // add prod's digits: same as prod/10 + prod%10
      sum += prod / 10 + prod % 10;
    }
  }

  if (sum % 10 != 0)
  {
    printf("INVALID\n");
    return 0;
  }

  // Determine card type by length and starting digits
  // get starting two digits and first digit
  int firsDigit = cardNumber[0] - '0';
  int firstTwo = 0;
  int firstFour = 0;
  if (len >= 2)
  {
    firstTwo = (cardNumber[0] - '0') * 10 + (cardNumber[1] - '0');
  }
  if (len >= 4)
  {
    firstFour = (cardNumber[0] - '0') * 1000
              + (cardNumber[1] - '0') * 100
              + (cardNumber[2] - '0') * 10
              + (cardNumber[3] - '0'); 
  }

  if (len == 15 && (firstTwo == 34 || firstTwo == 37)) 
  {
    printf("AMEX\n");
  }
  else if (len == 16 && (
    (firstTwo >= 51 && firstTwo <= 55) ||
    (firstFour >= 2221 && firstFour <= 2720)
  ))
  {
    printf("MASTERCARD\n");
  }
  else if ((len == 13 || len == 16) && cardNumber[0] == '4')
  {
    printf("VISA\n");
  }
  else
  {
    printf("INVALID\n");
  }
    
}

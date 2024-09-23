#include <stdio.h>

// Function prototypes
unsigned int GetGCD(unsigned int num1, unsigned int num2);
unsigned int GetNumber(char *prom);

int main(int argc, char *argv[])
{
  printf("\nThis program finds GCD & LCM\n\n");

  //
  char key;

  // Getting input from the user
  unsigned int num1 = GetNumber("Write first integer: ");
  unsigned int num2 = GetNumber("Write second integer: ");

  // Calculating Greatest Common Deviser
  // Smallest number goes first
  unsigned int gcd = 0;
  if (num1 < num2)
    gcd = GetGCD(num1, num2);
  else
    gcd = GetGCD(num2, num1);

  // Calculating Lowest Common Multiple
  int lcm = num1 * num2 / gcd;

  printf("\nYour GCD is: %d\n", gcd);
  printf("Your LCM is: %d\n\n", lcm);

  printf("Press any key..");
  scanf("%c", &key);
  scanf("%c", &key);

  return 0;
}

unsigned int GetNumber(char *prom)
{
  unsigned int num = 0;

  printf("%d", prom);
  scanf("%d", &num);

  return num;
}

int GetGCD(int num1, int num2)
{
  int remainder = num1 % num2;
  if (remainder == 0)
    return num2;
  return GetGCD(num2, remainder);
}
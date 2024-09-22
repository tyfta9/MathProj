#include <stdio.h>

// Function prototypes
int GetGCD(int num1, int num2);
int GetNummber(char *promt);

int main(int argc, char *argv[])
{
  printf("\nThis program finds GCD & LCM\n\n");

  char key;

  int num1 = GetNummber("Write first integer: ");
  int num2 = GetNummber("Write second integer: ");

  int gcd = GetGCD(num1, num2);
  int lcm = num1 * num2 / gcd;

  printf("\nYour GCD is: %d\n", gcd);
  printf("Your LCM is: %d\n\n", lcm);

  printf("Press any key..");
  scanf("%c", &key);
  scanf("%c", &key);

  return 0;
}

int GetNummber(char *promt)
{
  int num = 0;

  printf("%s", promt);
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
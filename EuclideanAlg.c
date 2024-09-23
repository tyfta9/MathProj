#include <stdio.h>
#include <string.h>

// Function prototypes
unsigned int GetGCD(unsigned int num1, unsigned int num2);
unsigned int GetNumber(char *prom);

int main(int argc, char *argv[])
{
  printf("\nThis program finds GCD & LCM\n\n");

  // Getting input from the user
  unsigned long num1 = GetNumber("Write first integer: ");
  unsigned long num2 = GetNumber("Write second integer: ");

  // Calculating Greatest Common Divisor (GCD)
  // Smaller number goes first
  unsigned int gcd = 0;
  if (num1 < num2)
    gcd = GetGCD(num1, num2);
  else
    gcd = GetGCD(num2, num1);

  // Calculating Lowest Common Multiple (LCM)
  unsigned long lcm = num1 * num2 / gcd;

  // Correct output of GCD and LCM
  printf("\nYour GCD is: %u\n", gcd);  // Use %u for unsigned int
  printf("Your LCM is: %lu\n\n", lcm); // Use %lu for unsigned long

  // End of the program, wait for key
  printf("Press any key to exit...");

  getchar(); // Capture leftover newline
  getchar(); // Wait for key press

  return 0;
}

unsigned int GetNumber(char *prom)
{
  unsigned int num = 0;

  // Prompt user for input
  printf("%s", prom); // Use %s to print string
  scanf("%u", &num);  // Use %u for unsigned int

  return num;
}

unsigned int GetGCD(unsigned int num1, unsigned int num2)
{
  // Calculating Greatest Common Divisor using recursion
  unsigned int remainder = num1 % num2;
  if (remainder == 0)
    return num2;
  return GetGCD(num2, remainder);
}
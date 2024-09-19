#include <stdio.h>
#include <string.h>

#define MAX 50

// Function prototypes
int GetNumber(char *num);
// char *ReadString(char *string, char *promt);

int main(int argc, char *argv[])
{
  char promt[] = {"Nummber:"};
  char numArr[MAX];
  scanf(promt, numArr);
  printf("%s", numArr);
  int num = GetNumber(numArr);

  return 0;
}

int GetNumber(char *num)
{
  int result = 0;
  // for (int i = 0;; i++)
  // {
  //   if (!num[i])
  //     break;

  //   printf("%c", (num[i] - '0'));
  // }
  return result;
}
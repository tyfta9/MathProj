#include <stdio.h>
#include <string.h>

int GetNumber();
char *ReadString();
int GetFirstNum();

int main(int argc, char *argv[])
{
  char promt[] = {"Num:"};

  GetFirstNum(promt);

  return -1;
}

int GetNumber(char num[])
{
  // for (int i = 0;; i++)
  // {
  //   if (!num[i])
  //     break;

  //   printf("%c", num[i]);
  // }
  return 0;
}

char *ReadString(char promt[])
{
  char num[100];
  scanf(promt, num);
  return *num;
}

int GetFirstNum(char promt[])
{
  return GetNumber(ReadString(promt));
}
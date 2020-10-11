#include <stdio.h>
#include <string.h>
#include <ctype.h>

char temp[26];
char input[100];

// 1 = success
// 0 = failed
int isExist(char in)
{
  for (int i = 0; i < strlen(temp); i++)
  {
    if (temp[i] == in)
    {
      return 1;
    }
  }

  return 0;
}
int main()
{
  // printf("%lu", strlen(temp));

  gets(input);
  for (int i = 0; i < strlen(input); i++)
  {
    int exist = isExist(tolower(input[i]));
    if (exist == 0) // not exist
    {
      temp[strlen(temp)] = tolower(input[i]);
    }
  }

  if (strlen(temp) == 26)
  {
    printf("YES\n");
  }
  else
  {
    printf("NO\n");
  }
  return 1;
}
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
  char guestName[100];
  char hostName[100];
  char availableLetters[200];

  gets(guestName);
  gets(hostName);
  gets(availableLetters);

  // ANTAMOROZDEDCLAUS

  // guestName
  for (int i = 0; i < strlen(guestName); i++)
  {
    printf("processing guestName, char: %c, available letters: %s\n", guestName[i], availableLetters);

    int found = 0;
    for (int j = 0; j < strlen(availableLetters); j++)
    {
      if (guestName[i] == availableLetters[j])
      {
        availableLetters[j] = ' ';
        found = 1;
        break;
      }
    }
    if (found == 0) // not found
    {
      printf("NO\n");
      return 0;
    }
  }

  // hostName
  for (int i = 0; i < strlen(hostName); i++)
  {
    printf("processing hostName, char: %c, available letters: %s\n", guestName[i], availableLetters);
    int found = 0;
    for (int j = 0; j < strlen(availableLetters); j++)
    {
      if (hostName[i] == availableLetters[j])
      {
        availableLetters[j] = ' ';
        found = 1;
        break;
      }
    }

    if (found == 0)
    {
      printf("NO\n");
      return 0;
    }
  }

  printf("YES\n");
  // TODO: prevent program from closing to accept key press to close
  getchar(); 
  return 0;
}
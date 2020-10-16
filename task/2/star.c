#include <stdio.h>

int main()
{
  printf("\n");
  int s;
  scanf("%d", &s);

  for (int i = 1; i <= s - 1; i++)
  {
    for (int j = 1; j <= s + 3 - i; j++)
    {
      printf(".");
    }

    if (i > 1)
    {
      printf("0");
    }

    for (int j = 1; j <= i - 2; j++)
    {
      printf(".");
    }

    printf("0");

    for (int j = 1; j <= i - 2; j++)
    {
      printf(".");
    }

    if (i > 1)
    {
      printf("0");
    }

    for (int j = 1; j <= s + 3 - i; j++)
    {
      printf(".");
    }

    // for (int j = 0; j < s; j++)
    // {
    //   printf("0");
    // }
    printf("\n");
  }

  for (int i = 1; i <= (s * 2) + 5; i++)
  {
    printf("0");
  }
  printf("\n");

  for (int i = 1; i <= s - 3; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf(".");
    }

    printf("0");

    for (int j = 1; j <= (s + 1) - i; j++)
    {
      printf(".");
    }

    printf("0");

    for (int j = 1; j <= (s + 1) - i; j++)
    {
      printf(".");
    }

    printf("0");

    for (int j = 1; j <= i; j++)
    {
      printf(".");
    }

    printf("\n");
  }

  for (int i = 1; i <= 2; i++)
  {
    for (int j = 1; j <= s - 3; j++)
    {
      printf(".");
    }
    for (int j = 1; j <= 11; j++)
    {
      printf("0");
    }
    for (int j = 1; j <= s - 3; j++)
    {
      printf(".");
    }
    printf("\n");
  }

  for (int i = 1; i <= s - 3; i++)
  {
    for (int j = 1; j <= s - i - 2; j++)
    {
      printf(".");
    }

    printf("0");

    for (int j = 1; j <= i + 3; j++)
    {
      printf(".");
    }

    printf("0");

    for (int j = 1; j <= i + 3; j++)
    {
      printf(".");
    }

    printf("0");

    for (int j = 1; j <= s - i - 2; j++)
    {
      printf(".");
    }

    printf("\n");
  }

  for (int i = 1; i <= (s * 2) + 5; i++)
  {
    printf("0");
  }
  printf("\n");

  for (int i = 1; i <= s - 1; i++)
  {
    for (int j = 1; j <= i + 3; j++)
    {
      printf(".");
    }

    if (i < s - 1)
    {
      printf("0");
    }

    for (int j = 1; j <= s - i - 2; j++)
    {
      printf(".");
    }

    printf("0");

    for (int j = 1; j <= s - i - 2; j++)
    {
      printf(".");
    }

    if (i < s - 1)
    {
      printf("0");
    }

    for (int j = 1; j <= i + 3; j++)
    {
      printf(".");
    }

    printf("\n");
  }

  printf("\n");
  return 0;
}
#include <stdio.h>

int main()
{
  int len;
  printf("enter length of array: ");
  scanf("%d", &len);

  int arr[len];
  char arrC[len];

  char temp;
  for (int i = 0; i < len; i++)
  {
    printf("enter value for arr[%d]: ", i);
    scanf("%d%c %c", &arr[i], &temp, &arrC[i]);
  }

  printf("input:\n");
  for (int i = 0; i < len; i++)
  {
    printf("no: %d, pg: %c \n", arr[i], arrC[i]);
  }
  printf("\n");

  // TODO: code process here
  return 0;
}
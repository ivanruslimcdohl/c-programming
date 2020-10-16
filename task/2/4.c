#include <stdio.h>

int main()
{
  int len;
  printf("enter length of array: ");
  scanf("%d", &len);

  int arr[len];

  for (int i = 0; i < len; i++)
  {
    printf("enter value for arr[%d]: ", i);
    scanf("%d", &arr[i]);
  }

  printf("input:\t");
  for (int i = 0; i < len; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");

  // process
  for (int i = 0; i < len; i++)
  {
    int sumLeft = 0;
    int sumRight = 0;
    for (int j = 0; j < len; j++)
    {
      if (j < i)
      {
        sumLeft += arr[j];
      }
      else if (j > i)
      {
        sumRight += arr[j];
      }
    }
    if (sumLeft == sumRight)
    {
      printf("equibrillium index: %d\n", i);
      return 0;
    }
  }

  printf("no equibrillium index in the array\n");

  return 0;
}
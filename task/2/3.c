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
  for (;;)
  {
    int isSwapHappen = 0;
    for (int i = 0; i < len; i++)
    {
      // el is 0, not last index, and < from next element
      if ((arr[i] == 0) && (i != len - 1) && (arr[i] < arr[i + 1]))
      {
        int temp = arr[i + 1];
        arr[i + 1] = arr[i];
        arr[i] = temp;
        isSwapHappen = 1;
      }
    }

    if (isSwapHappen == 0)
    {
      break;
    }
  }

  printf("output:\t");
  for (int i = 0; i < len; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}
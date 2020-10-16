#include <stdio.h>

int main()
{
  int len;
  printf("enter length of binary array: ");
  scanf("%d", &len);

  int arr[len];

  for (int i = 0; i < len; i++)
  {
  scanInput:
    printf("enter value for arr[%d]: ", i);
    scanf("%d", &arr[i]);
    if ((arr[i] != 0) && (arr[i] != 1))
    {
      printf("please only enter binary digit! (0 or 1)\n");
      goto scanInput;
    }
  }

  printf("unsorted binary array ==>\t");
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
      // not last index, and > from next element
      if ((i != len - 1) && (arr[i] > arr[i + 1]))
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
  // note: if swap not happen, then it is already sorted

  printf("sorted binary array ==>\t\t");

  for (int i = 0; i < len; i++)
  {
    printf("%d ", arr[i]);
  }

  printf("\n");
  return 0;
}
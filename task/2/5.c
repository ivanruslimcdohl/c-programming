#include <stdio.h>
#include <string.h>

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
  int largestSum = arr[0];
  char largestSumText[100];
  sprintf(largestSumText, "{ %d }", arr[0]);
  for (int i = 0; i < len; i++)
  {
    int localLargestSum = 0;
    char localLargestSumText[100] = "{ ";

    for (int j = i; j < len; j++)
    {
      int tempLargestSum = 0;
      char tempLargestSumText[100] = "{ ";
      for (int k = i; k <= j; k++)
      {
        tempLargestSum += arr[k];
        char strTemp[100];
        sprintf(strTemp, "%d ", arr[k]);
        strcat(tempLargestSumText, strTemp);
      }
      strcat(tempLargestSumText, "}");
      if (tempLargestSum > localLargestSum)
      {
        localLargestSum = tempLargestSum;
        strcpy(localLargestSumText, tempLargestSumText);
      }
    }
    if (localLargestSum > largestSum)
    {
      largestSum = localLargestSum;
      strcpy(largestSumText, localLargestSumText);
    }
  }

  printf("Largest sum is : %s with sum %d\n", largestSumText, largestSum);

  return 0;
}
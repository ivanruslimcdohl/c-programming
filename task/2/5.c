#include <stdio.h>
#include <string.h>

int main()
{
  // int len = 9;
  int len;
  printf("enter length of array: ");
  scanf("%d", &len);

  int arr[len];

  for (int i = 0; i < len; i++)
  {
    printf("enter value for arr[%d]: ", i);
    scanf("%d", &arr[i]);
  }

  // arr[0] = -2;
  // arr[1] = 1;
  // arr[2] = -3;
  // arr[3] = 4;
  // arr[4] = -1;
  // arr[5] = 2;
  // arr[6] = 1;
  // arr[7] = -5;
  // arr[8] = 4;

  printf("input:\t");
  for (int i = 0; i < len; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");

  // process
  int largestSum = -2147483648;
  char largestSumText[100] = "{ }";
  for (int i = 0; i < len; i++) // determine start
  {
    printf("\nstart from %d (index %d):\n", arr[i], i);

    int localLargestSum = -2147483648;
    char localLargestSumText[100] = "{ ";

    for (int j = i; j < len; j++) // determine possible combination
    {
      int tempSum = 0;
      char tempSumText[100] = "{ ";
      for (int k = i; k <= j; k++) // to sum them up
      {
        printf("%d ", arr[k]);
        tempSum += arr[k];
        char strTemp[100];
        sprintf(strTemp, "%d ", arr[k]);
        strcat(tempSumText, strTemp);
      }

      printf(" = %d", tempSum);
      strcat(tempSumText, "}");
      if (tempSum > localLargestSum)
      {
        localLargestSum = tempSum;
        strcpy(localLargestSumText, tempSumText);
      }
      printf("\n");
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
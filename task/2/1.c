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

  int sum;
  printf("enter wanted sum: ");
  scanf("%d", &sum);

  // process
  for (int i = 0; i < len; i++)
  {
    for (int j = 0; j < len; j++)
    {
      if (i == j)
      {
        continue;
      }
      if ((arr[i] + arr[j]) == sum)
      {
        printf("Pair found at index %d and %d (%d + %d)\n", i, j, arr[i], arr[j]);
        return 0;
      }
    }
  }
  return 0;
}
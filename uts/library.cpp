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

  printf("\ninput:");
  for (int i = 0; i < len; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");

  int isIncreased = 0;
  int isDecreased = 0;
  for (int i = 0; i < len; i++)
  {
    if (i != len - 1)
    {
      if (arr[i] <= arr[i + 1])
      {
        isIncreased = 1;
      }
      else if (arr[i] >= arr[i + 1])
      {
        isDecreased = 1;
      }
    }
  }

  if ((isIncreased == 1) && (isDecreased == 1)) // bibi
  {
    printf("Bibi\n");
  }
  else if (isIncreased == 1) // jojo
  {
    printf("Jojo\n");
  }
  else if (isDecreased == 1) // lili
  {
    printf("Lili\n");
  }

  return 0;
}
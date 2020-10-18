#include <stdio.h>

int main()
{
  int len = 5;
  // printf("enter length of array: ");
  // scanf("%d", &len);

  int arr[len];
  // for (int i = 0; i < len; i++)
  // {
  //   printf("enter value for arr[%d]: ", i);
  //   scanf("%d", &arr[i]);
  // }

  arr[0] = 10;
  arr[1] = 25;
  arr[2] = 15;
  arr[3] = 30;
  arr[4] = 50;

  printf("input:\t");
  for (int i = 0; i < len; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");

  int divisor[len][100];
  for (int i = 0; i < len; i++) // determine divisor of each
  {
    int currIdx = 0;
    for (int j = 0; j < arr[i]; j++) // find all divisors of arr[i]
    {
      printf("%d habis dibagi %d ?", arr[i], (j + 1));
      if (arr[i] % (j + 1) == 0) //habis dibagi
      {
        printf(" yes");
        divisor[i][currIdx] = (j + 1);
        currIdx++;
      }
      else
      {
        printf(" no");
      }
      printf("\n");
    }
    printf("\n");
  }

  // find real divisorlen
  int realDivisorLen[len];
  for (int i = 0; i < len; i++)
  {
    int divisorLen = sizeof(divisor[i]) / sizeof(int);
    int tempRealDivisorLen = divisorLen;
    for (int j = 0; j < divisorLen; j++)
    {
      // zero or cant divide arr[i]
      if ((divisor[i][j] == 0) || (arr[i] % divisor[i][j] != 0))
      {
        tempRealDivisorLen = j;
        break;
      }
    }
    realDivisorLen[i] = tempRealDivisorLen;
    printf("divisor for %d(%d divisors): ", arr[i], realDivisorLen[i]);
    for (int j = 0; j < realDivisorLen[i]; j++)
    {
      printf("%d ", divisor[i][j]);
    }
    printf("\n");
  }
  printf("\n");

  int ggcd = 1;
  for (int i = 0; i < len; i++) // determine start
  {
    for (int j = 0; j < len; j++)
    {
      if (i == j)
      {
        continue;
      }

      int gcd = 1; // 1 always a divisor
      // divisor i
      for (int k = 0; k < realDivisorLen[i]; k++)
      {
        // divisor j
        for (int l = 0; l < realDivisorLen[j]; l++)
        {
          if ((divisor[i][k] == divisor[j][l]) && (divisor[i][k] > gcd))
          {
            gcd = divisor[i][k];
          }
        }
      }
      printf("gcd for %d and %d is %d", arr[i], arr[j], gcd);
      if (gcd > ggcd)
      {
        printf(", it is higher than current ggcd, it is the new ggcd");
        ggcd = gcd;
      }
      printf("\n");
    }
    printf("\n");
  }
  printf("\nggcd: %d\n", ggcd);

  return 0;
}
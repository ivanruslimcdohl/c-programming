#include <stdio.h>

int main()
{
  int len;
  printf("enter how many points: ");
  scanf("%d", &len);

  int arr[len][2];

  for (int i = 0; i < len; i++)
  {
    printf("enter x coordinate for point %d: ", i);
    scanf("%d", &arr[i][0]);
    printf("enter x coordinate for point %d: ", i);
    scanf("%d", &arr[i][1]);
    printf("\n");
  }

  for (int i = 0; i < len; i++)
  {
    printf("point %d : %d %d\n", i, arr[i][0], arr[i][1]);
  }
  printf("\n");

  int countPointsInQ[4];
  // countPointsInQ[0] (+;+)
  // countPointsInQ[1] (-;+)
  // countPointsInQ[2] (-;-)
  // countPointsInQ[3] (+;-)

  for (int i = 0; i < len; i++)
  {
    if (arr[i][0] < 0) // x negative int
    {
      if (arr[i][1] < 0) // y negative int (-;-)
      {
        countPointsInQ[2]++;
      }
      else if (arr[i][1] > 0) // y positive int (-;+)
      {
        countPointsInQ[1]++;
      }
    }
    else if (arr[i][0] > 0) // x positive int
    {
      if (arr[i][1] < 0) // y negative int (+;-)
      {
        countPointsInQ[3]++;
      }
      else if (arr[i][1] > 0) // y positive int (+;+)
      {
        countPointsInQ[0]++;
      }
    }
  }

  for (int i = 0; i < 4; i++) // loop through quadrant
  {
    printf("count points in quadrant %d: %d \n", (i + 1), countPointsInQ[i]);
  }

  printf("\n");

  return 0;
}
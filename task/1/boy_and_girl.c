#include <stdio.h>
#include <string.h>

// void addDistinctNum(int i)
// {
//   int exist = isExist(input[i]);
//   if (exist == 0) // not exist
//   {
//     temp[i] = input[i]; // add to temp
//     distinctNum++;
//   }
// }

// void vGetFivePlusNum(int num)
// {
//   printf("%d", 5 + num);
// }

// int getFivePlusNum(int num)
// {
//   return 5 + num;
// }

char temp[26];
int distinctNum = 0;

char input[100];

// 1 = success
// 0 = failed
int isExist(char in)
{
  for (int i = 0; i < strlen(temp); i++)
  {
    if (temp[i] == in)
    {
      return 1;
    }
  }

  return 0;
}

int main()
{
  // getFivePlusNum
  // int a = getFivePlusNum(60);
  // int z = a + 1;
  // printf("%d", a); // 65
  // vGetFivePlusNum(60); // 65

  // wjmzbmrmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmp
  // i=0, w, temp(before) = [], temp(after) = [w]                    distinctNum = 0
  // i=1, j, temp(before) = [w], temp(after) = [w,j]                 distinctNum = 1
  // i=2, m, temp(before) = [w,j], temp(after) = [w,j,m]             distinctNum = 2
  // i=3, z, temp(before) = [w,j,m], temp(after) = [w,j,m,z]         distinctNum = 3
  // i=4, b, temp(before) = [w,j,m,z], temp(after) = [w,j,m,z,b]     distinctNum = 4
  // i=5, m, temp(before) = [w,j,m,z,b], temp(after) = [w,j,m,z,b]   distinctNum = 5
  // i=6, r, temp(before) = [w,j,m,z,b], temp(after) = [w,j,m,z,b,r] distinctNum = 6

  gets(input);
  for (int i = 0; i < strlen(input); i++)
  {
    int exist = isExist(input[i]);
    printf("char: %c, strlen(temp): %lu --> ", input[i], strlen(temp));
    if (exist == 0) // not exist
    {
      printf("add to temp\n");
      temp[strlen(temp)] = input[i];
      distinctNum++;
    }
    else
    {
      printf("not add to temp\n");
    }
    // addDistinctNum(i);
  }

  if (distinctNum % 2 == 0) //genap
  {
    printf("CHAT WITH HER!\n");
  }
  else
  {
    printf("IGNORE HIM!\n");
  }

  return 0;
}
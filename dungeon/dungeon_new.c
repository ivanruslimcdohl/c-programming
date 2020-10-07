#include <stdio.h>
#include <conio.h> /* for getch() */
#include <time.h>

int yDollar = 0;
int xDollar = 0;

int yPlayer = 0;
int xPlayer = 0;

int maxY = 11;
int maxX = 22;

int score = 0;
int moveCount = 0;

char d[12][23] = {
    "#######################",
    "#       #             #",
    "#   #   #   #######   #",
    "#   #   #         #   #",
    "#         #####   #   #",
    "#######   #   #   #   #",
    "#     #   #   #   #   #",
    "# #   #   #   #   #   #",
    "#                 #   #",
    "###########   #####   #",
    "#             #       #",
    "#######################",
};

void moveX(int newX)
{
   if ((newX >= 0) && (d[yPlayer][newX] != '#'))
   {
      if (d[yPlayer][newX] == '$')
      {
         for (;;)
         {
            int yRand = rand() % (maxY + 1 - 0) + 0;
            int xRand = rand() % (maxX + 1 - 0) + 0;
            if (d[yRand][xRand] == ' ') // make sure position is available
            {
               d[yRand][xRand] = '$';
               break;
            }
         }
         score++;
      }

      d[yPlayer][xPlayer] = ' ';
      xPlayer = newX;
      d[yPlayer][xPlayer] = 'Y';
   }
}

void moveY(int newY)
{
   if (newY >= 0 && (d[newY][xPlayer] != '#'))
   {
      if (d[newY][xPlayer] == '$')
      {
         for (;;)
         {
            int yRand = rand() % (maxY + 1 - 0) + 0;
            int xRand = rand() % (maxX + 1 - 0) + 0;
            if (d[yRand][xRand] == ' ') // make sure position is available
            {
               d[yRand][xRand] = '$';
               break;
            }
         }
         score++;
      }
      d[yPlayer][xPlayer] = ' ';
      yPlayer = newY;
      d[yPlayer][xPlayer] = 'Y';
   }
}

int main()
{
   // choose either one to make rand num generation is unique everytime
   srand(time(NULL));
   // srand(getpid());

   int randPosSelected = 0;
   for (;;)
   {
      int yRand = rand() % (maxY + 1 - 0) + 0;
      int xRand = rand() % (maxX + 1 - 0) + 0;
      // printf("gen random yRand: %d, xRand: %d\n", yRand, xRand);
      if (d[yRand][xRand] == ' ') // make sure initial position is available
      {
         if (randPosSelected == 0)
         {
            yDollar = yRand;
            xDollar = xRand;
         }
         else if (randPosSelected == 1)
         {
            yPlayer = yRand;
            xPlayer = xRand;
         }
         else
         {
            break;
         }
         randPosSelected++;
      }
   }

   d[yPlayer][xPlayer] = 'Y';
   // printf("using yPlayer: %d, xPlayer: %d as initial position\n", yPlayer, xPlayer);

   d[yDollar][xDollar] = '$';
   // printf("using yDollar: %d, xDollar: %d as initial position\n", yDollar, xDollar);

   for (;;)
   {
      system("cls");

      int a, b;
      for (a = 0; a < 12; a = a + 1)
      {
         for (b = 0; b < 23; b = b + 1)
         {
            printf("%c", d[a][b]);
         }
         printf("\n");
      }

      printf("\nScore\t\t: %d", score);
      printf("\nMovement count\t: %d", moveCount);

      char c;
      c = getch();
      moveCount++;

      int newY;
      int newX;
      switch (c)
      {

      case 'w':
      case 'W':
         moveY(yPlayer - 1);
         break;

      case 'a':
      case 'A':
         moveX(xPlayer - 1);
         break;

      case 's':
      case 'S':
         moveY(yPlayer + 1);
         break;

      case 'd':
      case 'D':
         moveX(xPlayer + 1);
         break;
      }
   }

   return 0;
}

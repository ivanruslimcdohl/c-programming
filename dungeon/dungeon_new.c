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

char dungeon[12][23] = {
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

void placePlayerAndDollar()
{
   int randPosSelected = 0;
   for (;;)
   {
      int yRand = rand() % (maxY + 1 - 0) + 0;
      int xRand = rand() % (maxX + 1 - 0) + 0;
      // printf("gen random yRand: %d, xRand: %d\n", yRand, xRand);
      if (dungeon[yRand][xRand] == ' ') // make sure position is available
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

   dungeon[yPlayer][xPlayer] = 'Y';
   // printf("using yPlayer: %d, xPlayer: %d as initial position\n", yPlayer, xPlayer);

   dungeon[yDollar][xDollar] = '$';
   // printf("using yDollar: %d, xDollar: %d as initial position\n", yDollar, xDollar);
}

void collectMoney()
{
   for (;;)
   {
      int yRand = rand() % (maxY + 1 - 0) + 0;
      int xRand = rand() % (maxX + 1 - 0) + 0;
      if (dungeon[yRand][xRand] == ' ') // make sure position is available
      {
         dungeon[yRand][xRand] = '$';
         break;
      }
   }
   score++;
}

void moveX(int newX)
{
   if ((newX >= 0) && (newX <= maxX) && (dungeon[yPlayer][newX] != '#'))
   {
      if (dungeon[yPlayer][newX] == '$')
      {
         collectMoney();
      }

      dungeon[yPlayer][xPlayer] = ' ';
      xPlayer = newX;
      dungeon[yPlayer][xPlayer] = 'Y';
   }
}

void moveY(int newY)
{
   if (newY >= 0 && (newY <= maxY) && (dungeon[newY][xPlayer] != '#'))
   {
      if (dungeon[newY][xPlayer] == '$')
      {
         collectMoney();
      }
      dungeon[yPlayer][xPlayer] = ' ';
      yPlayer = newY;
      dungeon[yPlayer][xPlayer] = 'Y';
   }
}

void drawDungeon()
{
   system("cls");

   int a, b;
   for (a = 0; a < 12; a = a + 1)
   {
      for (b = 0; b < 23; b = b + 1)
      {
         printf("%c", dungeon[a][b]);
      }
      printf("\n");
   }

   printf("\nScore\t\t: %d", score);
   printf("\nMovement count\t: %d", moveCount);
}

int main()
{
   // choose either one to make rand num generation is unique every execution
   srand(time(NULL));
   // srand(getpid());

   placePlayerAndDollar();

   for (;;)
   {
      drawDungeon();

      char c;
      c = getch();
      moveCount++;

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

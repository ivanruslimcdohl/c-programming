#include <stdio.h>

int main()
{

	int people;
	int temp;
	int numberQuestion;
	int question;
	int distance;
	int count = 0;

	scanf("%d %d", &people, &numberQuestion);

	int distanceArray[people];

	for (int i = 0; i < people; i++)
	{

		scanf("%d", &distanceArray[i]);
	}

	// process
	while (true)
	{
		// COMMENT
		// printf("\nretry from start: \n");
		// COMMENT
		int isSwapHappen = 0;
		for (int i = 0; i < people; i++)
		{
			// COMMENT
			printf("before at i=%d: ", i);
			for (int i = 0; i < people; i++)
			{
				printf("%d ", distanceArray[i]);
			}
			// not last index, and > from next element
			// COMMENT
			if ((i != people - 1) && (distanceArray[i] > distanceArray[i + 1]))
			{
				int temp = distanceArray[i + 1];
				distanceArray[i + 1] = distanceArray[i];
				distanceArray[i] = temp;
				isSwapHappen = 1;
			}
			// COMMENT
			printf(" ==> ");

			printf("after at i=%d: ", i);
			for (int i = 0; i < people; i++)
			{
				printf("%d ", distanceArray[i]);
			}
			printf("\n");
			// COMMENT
		}
		// COMMENT
		printf("\n");
		// COMMENT

		if (isSwapHappen == 0)
		{
			break;
		}
	}
	printf("output:\t");
	for (int i = 0; i < people; i++)
	{
		printf("%d ", distanceArray[i]);
	}
	printf("\n");

	for (int i = 0; i < numberQuestion; i++)
	{

		scanf("%d", &question);

		// int distanceDummy[people];

		// for (int j = 0; j < people; j++)
		// {

		// 	temp = people;

		// 	for (int k = 0; k < people; k++)
		// 	{

		// 		if (distanceArray[j] < distanceArray[k])
		// 		{
		// 			temp--;
		// 		}
		// 	}

		// 	distanceDummy[temp - 1] = distanceArray[j];
		// 	printf("set distanceDummy[%d] to %d\n", (temp - 1), distanceArray[j]);
		// }

		// for (int p = 0; p < people; p++)
		// {
		// 	printf("%d ", distanceDummy[p]);
		// }
		// printf("\n");

		count = 0;

		for (int l = 0; l < people; l++)
		{

			if (distanceArray[l] <= question)
			{

				count++;
			}
		}

		printf("%d\n", count);
	}

	return 0;
}

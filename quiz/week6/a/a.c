#include <stdio.h>
#include <math.h>

int main()
{
    int s;
    scanf("%d", &s);
    printf("\n");
    if (s < 4 || s > 30)
    {
        printf("error: these condition not satisfied: 4 <= 𝑆 <= 30");
        return 0;
    }

    // example written if input = 5
    for (int i = 1; i <= (s - 1); i++)
    {
        for (int j = 1; j <= s - i; j++)
        {
            printf(".");
        }

        printf("0");

        if (i >= 2)
        {
            for (int j = 1; j <= i - 2; j++)
            {
                printf(".");
            }
            printf("0");

            for (int j = 1; j <= i - 2; j++)
            {
                printf(".");
            }
            printf("0");
        }

        for (int j = 1; j <= (s + 1) - i; j++)
        {
            printf(".");
        }

        printf("\n");
    }

    for (int j = 1; j <= s * 2; j++)
    {
        if (j == s * 2)
        {
            printf(".");
            break;
        }
        printf("0");
    }
    printf("\n");

    for (int i = 1; i <= (s - 1); i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(".");
        }
        printf("0");

        if (i <= s - 2)
        {
            for (int j = 1; j <= s - i - 2; j++)
            {
                printf(".");
            }
            printf("0");
            for (int j = 1; j <= s - i - 2; j++)
            {
                printf(".");
            }
            printf("0");
        }

        for (int j = 1; j <= (i + 1); j++)
        {
            printf(".");
        }
        printf("\n");
    }

    return 0;
}

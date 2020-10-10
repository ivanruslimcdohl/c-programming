#include <stdio.h>
#include <math.h>

// A = starting number
// B = multiplier
// i = the i-th of the number
// N = modulo

// find size of cycle!

int main()
{
    int T;
    long n, a, b;
    scanf("%d", &T);
    if (T < 1 || T > 100)
    {
        printf("error: these condition not satisfied: 1 <= T <= 100");
        return 0;
    }
    for (int j = 0; j < T; j++)
    {
        scanf("%d %d %d", &n, &a, &b);
        printf("n: %d, a: %d, b: %d", n, a, b);
        if ((n < 1 || n > 100000) || (a < 1 || a > 100000) || (b < 1 || b > 100000))
        {
            printf("error: these condition not satisfied: 1 <= n,a,b <= 100,000");
            return 0;
        }
        // int e1 = (((a % n) * (b % n)) % n);
        // int e2 = ((a * b) % n);
        // printf("e1: %d, e2: %d\n", e1, e2);
        // if (e1 == e2)
        // {
        //     printf("equation valid!\n");
        // }
        // else
        // {
        //     printf("equation not valid!\n");
        //     return 0;
        // }
        long i = 1;
        for (;;)
        {
            long next = (long)(a * pow(b, i)) % n;

            printf("i = %d, a = %d, next: %d\n", i, a, next);
            if (a == next)
            {
                printf("Case #%d: %d\n\n", j + 1, i);
                break;
            }
            i++;
        }
    }

    return 0;
}
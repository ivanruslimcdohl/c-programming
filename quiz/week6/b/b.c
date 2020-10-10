#include <stdio.h>
#include <math.h>

// A = starting number
// B = multiplier
// i = the i-th of the number
// N = modulo

// find size of cycle!
// (a*b^i)%n

int main()
{
    int T;
    int n, a, b;
    scanf("%d", &T);
    if (T < 1 || T > 100)
    {
        printf("error: these condition not satisfied: 1 <= T <= 100");
        return 0;
    }
    printf("\n");
    for (int j = 0; j < T; j++)
    {
        scanf("%d %d %d", &n, &a, &b);
        printf("n: %d, a: %d, b: %d\n", n, a, b);
        if ((n < 1 || n > 100000) || (a < 1 || a > 100000) || (b < 1 || b > 100000))
        {
            printf("error: these condition not satisfied: 1 <= n,a,b <= 100,000");
            return 0;
        }
        int i = 1;
        for (;;)
        {
            int next = (int)(a * pow(b, i)) % n;
            printf("i = %d, a = %d, next: %d\n", i, a, next);

            if ((a == next) || (next <= 0))
            {
                printf("cycle not found(?):\n");
                printf("Case #%d: %d\n\n", j + 1, i);
                break;
            }
            i++;
        }
    }

    return 0;
}
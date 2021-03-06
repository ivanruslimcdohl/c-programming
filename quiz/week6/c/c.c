#include <stdio.h>
#include <math.h>
#include <string.h>

// input
// N = 5 (length of array)
// Q = 4 (count of query)

// A[5] = 1 1 3 4 5

// a[0] = 1
// a[1] = 1
// a[2] = 3
// a[3] = 4
// a[4] = 5

// X (query)
//  14 = a[L]+a[L+1]+...+a[R]   = 0 4
//  1                           = 0 0
//  4                           = 1 2
//  20                          = -1

// output
// find L & R

// R = lastindex

int main()
{
    int n;
    int q;
    scanf("%d %d", &n, &q);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < q; i++)
    {
        int currQ = 0;
        int found = -1;
        scanf("%d", &currQ);
        int l = 0;
        int r = 0;

        printf("Q: %d, l: %d, r: %d\n", currQ, l, r);
        int idxStart = 0;
        int doneProcess = 0;
        for (;;)
        {
            int currSum = 0;
            for (int j = idxStart; j < n; j++)
            {
                currSum += a[j];
                if (currSum == currQ)
                {
                    l = idxStart;
                    r = j;
                    found = 1;
                }
                else if ((idxStart == n - 1) && (j == n - 1))
                {
                    found = 0;
                }
                if (found != -1)
                {
                    break;
                }
            }
            if (found != -1)
            {
                break;
            }
            idxStart++;
        }

        if (found == 0)
        {
            printf("Case%d: %d\n\n", i + 1, -1);
        }
        else
        {
            printf("Case%d: %d %d\n\n", i + 1, l, r);
        }
    }

    return 0;
}
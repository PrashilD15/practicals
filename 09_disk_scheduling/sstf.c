#include <stdio.h>
#include <stdlib.h>

int main()
{
    int RQ[100], i, n, TotalHeadMoment = 0, initial, count = 0;

    printf("Enter the number of Requests\n");
    if (scanf("%d", &n) != 1 || n <= 0) return 1;

    printf("Enter the Requests sequence\n");
    for (i = 0; i < n; i++)
        scanf("%d", &RQ[i]);

    printf("Enter initial head position\n");
    scanf("%d", &initial);

    // logic for sstf disk scheduling
    /* loop will execute until all process is completed */
    while (count != n)
    {
        int min = 1000, d, index;
        for (i = 0; i < n; i++)
        {
            d = abs(RQ[i] - initial);
            if (min > d)
            {
                min = d;
                index = i;
            }
        }
        TotalHeadMoment = TotalHeadMoment + min;
        initial = RQ[index];
        // 1000 is for max (marking visited)
        RQ[index] = 1000;
        count++;
    }

    printf("Total head movement is %d\n", TotalHeadMoment);
    return 0;
}

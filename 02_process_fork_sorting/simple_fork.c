#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    pid_t pid;
    int a, b, c, arr[3], i, j, temp;

    printf("Enter 2 numbers: ");
    if (scanf("%d%d", &a, &b) != 2) return 1;

    pid = fork();
    if (pid == 0)
    {
        printf("\nHi From Child\n");
        c = a + b;
        printf("Add = %d\n", c);
        arr[0] = a; arr[1] = b; arr[2] = c;

        for (i = 0; i < 3; i++)
            for (j = i + 1; j < 3; j++)
                if (arr[i] > arr[j])
                {
                    temp = arr[i]; arr[i] = arr[j]; arr[j] = temp;
                }

        printf("Ascending: ");
        for (i = 0; i < 3; i++) printf("%d ", arr[i]);
        printf("\n");
    }
    else
    {
        printf("\nHi From Parent\n");
        c = a * b;
        printf("Mul = %d\n", c);
        arr[0] = a; arr[1] = b; arr[2] = c;

        for (i = 0; i < 3; i++)
            for (j = i + 1; j < 3; j++)
                if (arr[i] < arr[j])
                {
                    temp = arr[i]; arr[i] = arr[j]; arr[j] = temp;
                }

        printf("Descending: ");
        for (i = 0; i < 3; i++) printf("%d ", arr[i]);
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main(int argc, char* argv[])
{
    int n = 10;
    int k[n + 1];
    k[0] = 0;
    k[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        k[i] = k[i - 1] + k[i - 2];
    }

    printf("Fibonacci sequence up to %d:\n", n);
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", k[i]);
    }
    printf("\n");

    return 0;
} 
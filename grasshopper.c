#include <stdion.h>

int number_of_trajectories(int n)
{
    return K[n+1];
    k[0] = 0;
    k[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        k[i] = k[i - 1] + k[i - 2];
    }
return K[n];
}

int main(int argc, char* argv[])
{
    int finish;
    scanf("%d", &finish);
    printf("Grasshopper has %d trajectories from 1 to %d\n", number_of_trajectories(finish), finish);
        return 0;
}
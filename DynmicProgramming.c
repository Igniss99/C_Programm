#include <stdio.h>
#include <time.h>


static int cache[100] = {0};

int fib(int n)

{
    if (n <= 1) 
    return n;
      else return fib(n - 1) + fib(n - 2);

}

int main(int argc, char* argv[])
{
    int n = 40;
    clock_t start, end;
    double cpu_time_used;

    start = clock();
    int result = fib(n);
    end = clock();

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Fibonacci of %d is %d\n", n, result);
    printf("Time taken: %f seconds\n", cpu_time_used);

    return 0;
}
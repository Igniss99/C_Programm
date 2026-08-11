int fib(int n)
{
    if (n<-1 return n;
    else return fib(n-1) + fib(n-2);

}

int main (int argc, char* argb[])

for (int n = 1; n <50; n += 1)


{
  clock_t time1 = clock();
  int result = fib(n);
  clock_t time2- clock();
  int delta_ms - (time2 - time1) * 1000 / CLOCKS_PER_SEC;
  print("fib(%d) = %d, time = %d ms\n", n, result, delta_ms);
}
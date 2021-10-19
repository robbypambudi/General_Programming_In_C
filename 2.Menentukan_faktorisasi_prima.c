#include "stdio.h"

int main()
{
    unsigned long long int N;
    scanf("%llu", &N);

    unsigned long long int num = N;
    int divcount = 1;

    for (long long int i = 2; i * i <= num; i++)
    {
        int factorisasi = 0;
        while (num % i == 0)
        {
            factorisasi++;
            num /= i;
        }
        if (factorisasi != 0)
        {
            printf("%lld^%d ", i, factorisasi);
        }
        divcount *= (1 + factorisasi);
    }
    if (num > 1)
    {
        printf("x %llu\n", num);
    }
    else
    {
        printf("\n");
    }
    return 0;
}
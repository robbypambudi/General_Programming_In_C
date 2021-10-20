#include <stdio.h>

void fibonaci(int N)
{
    static int N1 = 0, N2 = 1, N3;

    if (N > 0)
    {
        N3 = N1 + N2;
        N1 = N2;
        N2 = N3;
        printf("%d ", N3);
        fibonaci(N - 1);
    }
}

int main()
{
    int N;
    printf("Enter the number of elements : ");
    scanf("%d", &N);
    printf(" 0 1 ");
    fibonaci(N - 2); // Number 1 and 2 already Printed
}
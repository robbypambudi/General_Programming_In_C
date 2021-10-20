#include <stdio.h>

int main()
{
    int N;
    long long int Fact = 1;
    printf("Enter Number : ");
    scanf("%d", &N);

    for (int i = N; i > 0; i--)
    {
        Fact *= i;
        printf("%d ", i);
    }
    printf("\nFactorial is : %lld\n", Fact);
}
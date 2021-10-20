#include <stdio.h>

int factorial(int number)
{
    if (number == 1)
        return 1;
    else
    {
        return (number * (factorial(number - 1)));
    }
}

int main()
{
    int N;
    printf("Enter The Number : ");
    scanf("%d", &N);
    int result = factorial(N);
    printf("Resault Is : %d\n", result);
}
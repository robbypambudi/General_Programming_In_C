#include <stdio.h>
#include <math.h>

int Ndigit(int number)
{
    int result = 0;
    while (number)
    {
        number /= 10;
        result++;
    }
    return result;
}

int amstrong(int digit, int number)
{
    int temp, result;
    while (number)
    {
        temp = number % 10;
        result += pow(temp, digit);
        number /= 10;
    }
    return result;
}

int main()
{
    int N;
    printf("Enter Number: ");
    scanf("%d", &N);

    // Cek Digit Number
    int digit = Ndigit(N);
    int result = amstrong(digit, N);

    if (N == result)
        printf("Amstrong Number\n");
    else
        printf("Not Amstrong Number\n");
}
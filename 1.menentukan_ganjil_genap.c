#include <stdio.h>

int main()
{
    int N;

    while (scanf("%d", &N) != 0)
    {
        if (N % 2 == 0)
        {
            printf("Genap\n");
        }
        else
        {
            printf("Ganjil\n");
        }
    }
    return 0;
}
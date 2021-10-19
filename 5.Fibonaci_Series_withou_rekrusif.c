#include <stdio.h>

int main()
{
    int N, N1 = 0, N2 = 1, N3;
    printf("Input the numbers : ");
    scanf("%d", &N);

    printf("%d %d ", N1, N2);
    for (int i = 2; i < N; ++i)
    {
        N3 = N1 + N2;
        printf("%d ", N3);
        N1 = N2;
        N2 = N3;
    }
    return 0;
}
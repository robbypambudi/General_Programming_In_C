/*
Implementasi Algoritma Sieve of Eratosthenes
Kompleksitas Waktu O(N*log(logN)) where N is Prime we are find

Cara kerja
1. Membuat deretan array boolean dari 2 -> N
2. Membuat deretan array tersebut bernilai false
3. Mengeliminasi baris yang kedapatan bukan prima dan menandainya sebagai true
4. Mencetak baris yang hanya memiliki nilai false
Selesai
*/

#include <stdio.h>
#include <stdbool.h>

void SieveOfEratosthenes(int N)
{
    bool data[N]; // Siapkan Array Bolean
    for (int i = 2; i <= N; i++)
    {
        data[i] = false; // Isi Array dengan False
    }

    for (int i = 2; i <= N; i++)
    {
        if (data[i] == false)
        {
            for (int j = i * i; j <= N; j += i)
            {
                data[j] = true;
            }
        }
    }
    printf("Prime number from 2 to %d are : ", N);
    for (int i = 2; i <= N; i++)
    {
        if (data[i] == false)
            printf("%d ", i);
    }
}

int main()
{
    int x;
    scanf("%d", &x);
    SieveOfEratosthenes(x);
}
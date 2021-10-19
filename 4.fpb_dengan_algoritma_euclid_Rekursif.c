/*

Implementasi Algoritma Euclid untuk menemukan FPB dengan waktu
O(log(min(a,b))).

Algoritma Euclid Mengunakan Rekursif

*/
#include <stdio.h>

int euclid(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return euclid(b, a % b);
    }
}

int main()
{
    int a, b, hasil;
    scanf("%d %d", &a, &b);
    hasil = euclid(a, b);
    printf("%d\n", hasil);
}

/*
Penjelasan 
Untuk Contoh soal 2 dan 8

a = 2, b = 8

-> akan masuk kedalam else 
-> -> Rekrusif 1 = (8, 2)  -> Rekrusif 2 (2, 0) -> Masuk Kedalam if (return a) a = 2
-> -> Rekrusif 2 = (10, 2) -> Rekrusif 2 (2, 2) -> Rekrusif 3 (2 , 0) ->Masuk Kedalam if (return a) a = 2

*/
Catatan Istimewa

## Modulo

Sifat-sifat tersebut dapat dimanfaatkan untuk mempermudah perhitungan modulo. Sebagai contoh, Anda diberikan bilangan n dan k, lalu diminta menghitung hasil n! mod k. Pada contoh ini, n! Seandainya kita menghitung n! terlebih dahulu, kemudian baru dimodulo k, kemungkinan besar kita akan mendapatkan integer overflow. Ingat bahwa n! dapat bernilai sangat besar dan tidak dapat direpresentasikan dengan tipe data primitif integer.

- (a + b) mod m = ((a mod m) + (b mod m)) mod m
- (a - b) mod m = ((a mod m) - (b mod m)) mod m
- (a * b) mod m = ((a mod m) * (b mod m)) mod m
- a^b mod m     = (a mod m)^b mod m
- (-a) mod m    = (-(a mod m) + m) mod m 

### 1. Menentukan Ganjil Genap
- Dengan di modulo 2 akan menghasilkan 0 jika genap
- 1 jika ganjil

### 2. Menentukan Faktorisasi Prima
---

### 3. Membuat Bilangan Prima dengan mengimplementasikan Algoritma Sieve Of Eratost
<img align="center" width=200px height=200px alt="side_sticker" src="https://id.wikipedia.org/wiki/Berkas:Sieve_of_Eratosthenes_animation.gif" />

Sumber : 
- https://id.wikipedia.org/wiki/Tapis_Eratosthenes
---

### 4. Menentukan FPB dengan Algoritma Euclid 

Sumber :
- https://id.wikipedia.org/wiki/Algoritme_Euklides

### 5. Fibonaci Series

- With recursive
```
Function (int N)
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
```
- Without recursive
```
for (int i = 2; i < N; ++i)
    {
        N3 = N1 + N2;
        printf("%d ", N3);
        N1 = N2;
        N2 = N3;
    }
```
**What is Static Int ?** <br>
https://www.geeksforgeeks.org/static-variables-in-c/

### Factorial 
- Factorial Using Loop
```
for (int i = N; i > 0; i--)
    {
        Fact *= i;
    }
```
Output
```
Enter Number : 5 
5 4 3 2 1 
Factorial is : 120
``` 

- Factorial Using Recursive
```
Function factorial(int number)
{
    if (number == 1)
        return 1;
    else
    {
        return (number * (factorial(number - 1)));
    }
}
```
Ouput
```
nter The Number : 6
Resault Is : 720
```
>>>>>>> Update Readme

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
- 
---
### 2. Menentukan Faktorisasi Prima

---
### 3. Membuat Bilangan Prima dengan mengimplementasikan Algoritma Sieve Of Eratost
<img align="center" width=200px height=200px alt="side_sticker" src="https://upload.wikimedia.org/wikipedia/commons/b/b9/Sieve_of_Eratosthenes_animation.gif"/>

Sumber : 
- https://id.wikipedia.org/wiki/Tapis_Eratosthenes
---

### 4. Menentukan FPB dengan Algoritma Euclid 

Sumber :
- https://id.wikipedia.org/wiki/Algoritme_Euklides
---

### 5. Fibonaci Series Without Rekrusif


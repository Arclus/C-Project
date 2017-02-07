#include <stdio.h>

int main ()
{
    int a, b, c, d;

    printf (" Bir sayi giriniz : ");
    scanf  (" %d", &a);

    // Buradaki b, asal olup olmadýðý araþtýrýlacak olan sayýdýr.
    for (b = 2; b < a; b ++)
    {
        d = 1;
            for (c = 2; c < b; c ++)
            {
                // Sayý 2'den baþlanarak kendisine kadar olan tüm tamsayýlara
                // sýrayla bölünüyor. Tam bölen bir sayýya raslandýðýnda
                // sayýnýn asal sayý olmadýðý anlaþýlýyor ve bir sonraki
                // sayýyý denemek için döngü kesiliyor. Bu arada, bu sayýnýn
                // asal olamadýðýný anlamatmak için d'nin deðeri 0 yapýlýyor.

                if (b % c == 0)
                {
                   d = 0;

                   break;
                }
            }

        // Burada iki ihtimal vardýr. d == 0 ya da d == 1.
        // b'nin asal olmadýðý anlaþýldýðýnda d'nin deðeri 0 yapýlmýþtý.
        // Aksi takdirde d'nin deðeri bir kalýr ve bu bize sayýnýn asal
        // olduðunu anlatýr.

        if (d == 1) printf (" %d \n", b );
     
        // Dögü bir sonraki sayýnýn asal olup olmadýðýný anlamak için
        // tekrar dönecektir. Bu nedenle d'nin deðeri döngünün baþýnda
        // tekrar 1 yapýlýyor.
    }

    return 0;
}
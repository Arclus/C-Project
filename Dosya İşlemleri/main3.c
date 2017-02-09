/*'kelvin.sck' dosyasinda bulunan 100 adet kelvin cinsinden sicaklik
   bilgilerini derece karsliklarini 'derece.sck' dosyasyna yazar.
   Bu iki sicaklik arasindaki çevrim kurali: K = 273 + C seklindedir. */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   FILE *oku, *yaz;

   char *kaynak_dosya = "kelvin.sck";
   char *hedef_dosya = "derece.sck";

   float K,D;
   int   i=0, n=100;

   if ( (oku=fopen(kaynak_dosya, "r")) == NULL )
   {
     printf("%s dosyasy acilmadi.\n", kaynak_dosya);
     exit(1);
   }
   
   if ( (yaz=fopen(hedef_dosya, "w")) == NULL )
   {
     printf("%s acilmadi.\n", hedef_dosya);
     exit(2);
   }

   for(i = 0; i < n; i++)
   {
      fscanf(oku,"%f",&K);      
      D = K - 273.0;         
      fprintf(yaz,"%8.2f\n",D);  
   }

   fclose(oku);
   fclose(yaz);

   printf("%s > %s\n", kaynak_dosya, hedef_dosya);
   puts("cevirme islemi tamamlandi.");

 return 0;
}

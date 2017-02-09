/* ogrenci.txt dosyasyndan no, isim ve not bilgileri okur ve notlar arasyndan en büyügü, en küçügü ve sinif ortlamasina (0'lar hariç) hesaplar. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *dg;
   char  Ad[10];
   int   Not, No, eb, ek, n, top;
   float ort;

   if( (dg=fopen("ogrenci.txt","r")) == NULL )
     puts("Dosya açylmady !\n"), exit(1);


   ek  =  1000; 
   eb  = -1000;
   top = 0;
   n   = 0; 

   while( !feof(dg) ) 
   {
      fscanf(dg,"%d %s %d",&No,Ad,&Not);

      if(Not>eb) eb = Not;    
      if(Not<ek) ek = Not;

      if(Not) n++;         

      top += Not;            
   }

   fclose(dg);         

   ort = (float) top/n;    

   printf("En yuksek not = %2d\n",eb);
   printf("En  dusuk not = %2d\n",ek);
   printf("Ortalama      = %4.1f\n",ort);

 return 0;
}

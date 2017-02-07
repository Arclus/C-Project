#include <stdio.h>
#include <stdlib.h>

int main()
{	  
	int sayi1, sayi2, topla, cikar, carp;
	float bol;
 
	printf("Iki sayi giriniz\n");
	scanf("%d", &sayi1);
  
	printf(" Ikinci sayiyi giriniz :");
	scanf("%d",&sayi2);
 
	carp = sayi1 * sayi2;
  
	printf("Çarpim = %d\n",carp);
 
	return carp;
}
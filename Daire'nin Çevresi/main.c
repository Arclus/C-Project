#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	// Dairenin Çevresi  2*pi*r
	
	int yaricap;
	float pi=3.14;
	int sayi=2;
	
	printf("Yaricapi giriniz :"); 
	scanf("%d",&yaricap);
	
	float cevre = pi * sayi * yaricap;
	
	printf("Daire'nin cevresi :%.2f",cevre);
	
	system("pause");
	
	return 0;	
}

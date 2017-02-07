#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a, b, sayi = 2, alan, cevre, c;
	
	printf("Dik kenarlardan birini giriniz :");
	scanf("%d",&a);
	
	printf("Diger dik kenari giriniz :");
	scanf("%d",&b);
	
	printf("Hipotenusu giriniz :");
	scanf("%d",&c);
	
	alan = a * b / sayi;
	cevre = a + b + c;
	
	printf("Dik Ucgenin\nAlani :%d\nCevresi :%d\n", alan, cevre);	
	
	system ("pause");
	return 0;
}
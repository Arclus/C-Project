#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a, b, Alan, Cevre;
	
	printf("Uzun kenari giriniz :");
	scanf("%d",&a);
	
	printf("Kisa kenari giriniz :");
	scanf("%d",&b);
	
	Alan = a * b;
	Cevre = a + a + b + b;
	
	printf("Dikdörtgenin\nAlani :%d\nCevresi :%d\n", Alan, Cevre);
	
	system("pause");
	return 0;		
}
#include <stdio.h>
#include <conio.h>

 int main ()
 { 
	int sayi,sayi1;
	
	printf("Tersini almak istediðiniz sayiyi giriniz");
	scanf("%d",&sayi);
  
	while ( sayi > 0 )
	{
	
		sayi1 = sayi % 10;
		sayi = sayi / 10;
 
		printf("%d",sayi1);
	}
	
	getch();
}
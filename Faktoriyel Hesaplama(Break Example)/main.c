/* n >= 0 olduðu sürece n! deðerini hesaplar */
#include <stdio.h>

int main(void)

{
	long int i, n, faktor;
	
	while(1) //sonsuz döngü
	{
		printf("Faktoriyeli hesaplanacak sayiyi giriniz :");
		scanf("%ld",&n);
		
		if( n< 0)
		{
			break;
		}
		
		for( faktor = 1, i = 1; i <= n; i++)
		{
			faktor *= i;
		}

		printf("%ld! = %ld\n",n,faktor);
	}
	
	return 0;
}
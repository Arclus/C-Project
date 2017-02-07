#include <stdio.h>
#include <string.h>

int main(void)
{

	int i,sayac,a,j,k;
	sayac = 0;

	FILE *DosyaOku;

	DosyaOku = fopen("dosya.txt", "r");

	char dizi[101];

	fgets(dizi,101,DosyaOku);

	a = strlen(dizi);
	printf("%d",a);
	printf("%s",dizi);

	for (i = 0; i < a ; i++)
	{
		if (dizi[i] == '0')
		{
			if (dizi[i] != dizi[i-1])
			{
				sayac = 0;
				sayac++;
				
				if (dizi[i] != dizi[i+1])
				{
					printf("00 0");
				}
			}
			
			else
			{
				if ( dizi[i] == dizi[i+1] )
				{
					sayac++;
				}

				else
					if (dizi[i] != dizi[i+1])
					{
						sayac++;
						printf("00 ");
						
						for ( k = 0; k < sayac; k++)
						{
							printf("0");
						}
						printf(" ");
					}
			}
		}
		else 
			if (dizi[i] == '1')
		{
			if (dizi[i] != dizi[i-1])
			{
				sayac = 0;
				sayac++;
				
				if (dizi[i] != dizi[i+1])
				{
					printf("0 0");
					printf(" ");
				}
			}
			else
			{
				if ( dizi[i] == dizi[i+1] )
				{
					sayac++;
				}

				else
					if (dizi[i] != dizi[i+1])
					{
						sayac++;
						printf("0 ");
						
						for ( j = 0; j < sayac; j++)
						{
							printf("0");
						}
					
						printf(" ");
					}
			}
		}
	}
	
	return 0;
}
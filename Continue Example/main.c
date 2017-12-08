/*
x, y'den farkli olmak üzere |x|+|y|<=3 esitsizligini saglayan 
tamsayi çiftlerini ekrana yazar
*/

#include <stdio.h>
#include <math.h>

int main()
{
	int x, y, k = 1;
	
	for (x = -3; x <= 3; x++)
	{
		for (y = -3; y <= 3; y++)
		{
			// x=y ise yeni çevrime gir, alt satirlari atla
			if(x == y)
			{
				continue;
			}
		
			if( abs(x) + abs(y) <= 3 )
			{
				printf("%2d. (%2d,%2d)\n", k++, x, y);
			}   	
		}
	}
	
	return 0;
}

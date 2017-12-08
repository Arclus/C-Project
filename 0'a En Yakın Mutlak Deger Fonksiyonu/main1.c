#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// 0 a en yakyn de?eri bulma
// fabs mutlak deger fonksiyonu

int main()
{
	int temps[10]={9,2,3,4,-2,-6,7,-8,9,10};
    int pclosest, i, j;
    
    pclosest = temps[0];
    
        for( i = 0; i < 10; i++ )
        {
          	if( fabs(temps[i]) < fabs(pclosest) )
          	{
          		pclosest = temps[i];
		}        		
        }
        
    printf("%d", pclosest);
    
    return 0;
}

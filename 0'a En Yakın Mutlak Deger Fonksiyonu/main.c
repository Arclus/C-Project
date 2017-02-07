#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// 0 a en yakyn de?eri bulma
// fabs mutlak deger fonksiyonu
//buble sort ile 

int main()
{
	int temps[10]={9,2,3,4,5,6,7,8,9,10};
	
    int pclosest, i, j;
    
        for ( i = 1; i < 10; i++ )
        {
          for ( j = 0; j < 10-i; j++ )
          {
          	if ( temps[j] < temps[j+1] )
        	{
        		pclosest=temps[j];
			}	
		  }
        }
        
    printf("%d",pclosest);
    
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

long long int factorial(int n);

int main()
{
	int rows,x,y;
	scanf("%d",&rows);
	
	for(x=0;x<rows;x++)
	{
		for (y=0;y<=(rows-x-2);y++ )
			{
				printf(" ");
				printf("%d and %dz",rows-x-2,y);
			}
		for(y=0;y<=x;y++)
			printf("%lld ",factorial(x)/(factorial(y) * factorial(x-y)));
		printf("\n");
	}
	
	return 0;
}

long long int factorial(int n)
{
   int c;
   long long result = 1;
 
   for( c = 1 ; c <= n ; c++ )
         result = result*c;
 
   return ( result );
}
	
			
		

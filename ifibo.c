#include<stdio.h>
#include<math.h>
#include<stdlib.h>

unsigned long long int ifibo(int a, int b, int c, int d, int n);

int main()
{
	int A,B,C,D,N,T,x;
	
	scanf("%d",&T);
	
	for(x=0;x<T;x++)
	{
		scanf("%d%d%d%d%d",&A,&B,&C,&D,&N);
		printf("%llu\n",ifibo(A,B,C,D,N));
	}
	return 0;
}

unsigned long long int ifibo(int a, int b, int c, int d, int n)
{
	if (n==0)
		return c;
	if (n==1)
		return d;
	else 
		return a*ifibo(a,b,c,d,n-1)+b*ifibo(a,b,c,d,n-2);
}


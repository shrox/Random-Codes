#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int isprime(int n,int primes[]);

int main()
{
	int primes[1000000],n,x;
	scanf("%d",&n);

	for(x=0;x<n+1;x++)
		{
			primes[x]=x;
			//~ printf("%d %d\n",primes[x],x);
			//~ printf("HI\n");
		}
	
	int p=2;
	while(p!=1000)
	{
		for(x=p*p;x<1000000;x+=p)
			{
				primes[x] = 0;
				//~ printf("BYE\n");
			}
		p++;
		while((primes[p]=0))
			p++;
	}
		
	if (isprime(n,primes) == 1)
		printf("True");
	else
		printf("False");
	
	return 0;
}

int isprime(int n, int primes[])
{
	if (primes[n] == 0)
		return 0;
	else
		return 1;
}

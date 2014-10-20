#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int N,x,series[1000000]={0},number1=0,number2=0;
	char colour[10];
	scanf("%d",&N);
	
	for(x=0; x<N; x++)
	{
		scanf("%s",colour);
		colour[5] = '\0';
		//printf("%C\n",colour[3]);
		
		if(colour[2] == 'U')
		{
		//	printf("U");
			series[x] = 1;
		//	printf("x %d and series[x] %d\n",x,series[x]);
		}
		else if (colour[2] == 'A')
		{
			series[x] = 2;
		//	printf("x %d and series[x] %d\n",x,series[x]);
		}
	}
	series[N] = '\0';
	
	for(x=0;x<N;x++)
	{
		if(series[x] == 1)
			number1++;
		else if (series[x] == 2)
			number2++;
	}
	
	if(number1%2 == 0 && number2%2 == 0)
		printf("YEs\n");
	else
	printf("NO\n");
		
	
	printf("%d %d %d %d\n",number1/2,number2/2,number1%2,number2%2);
	
	return 0;
}

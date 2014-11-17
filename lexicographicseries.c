#include<stdio.h>

int main()
{
	int array[1000000],x,i,j,n,k,count;
	
	scanf("%d%d",&n,&k);

	for(x=0;x<k;x++)
	{
		array[x]=1;
		//~ printf("%d ",array[x]);
	}


	count=1;
	while(1)
	{
		i=0;
		array[i]++;
		
		while(array[i]==n+1 && i!=k-1)
		{
			array[i+1]++;
			i++;
		}
		
		if(array[k-1]==n+1)
			break;
		
		j=i;
		
		for(;i>=0;i--)
			array[i]=array[j];
		
		for(x=k-1;x>=0;x--)
			continue;
			//~ printf("%d ",array[x]);
		
		//~ printf("\n");
		++count;
		//~ printf("count %d\n",++count);
	}
	printf("%d\n",count);	
	
		
	for(x=0;x<k;x++)
	{
		array[x]=1;
		printf("%d ",array[x]);
	}
	printf("\n");
	
	//~ count=1;
	while(1)
	{
		i=0;
		array[i]++;
		
		while(array[i]==n+1 && i!=k-1)
		{
			array[i+1]++;
			i++;
		}
		
		if(array[k-1]==n+1)
			break;
		
		j=i;
		
		for(;i>=0;i--)
			array[i]=array[j];
		
		for(x=k-1;x>=0;x--)
			printf("%d ",array[x]);
		
		printf("\n");
		++count;
		//~ printf("count %d\n",++count);
	}
	//~ printf("%d\n",count);
	
	return 0;
}

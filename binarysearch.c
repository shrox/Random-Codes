#include<stdio.h>
int main()
{
	int A[1000],n,number,x,t,last,first,middle;
	
	scanf("%d",&t);
	
	for (x=0;x<t;x++)
	{
		scanf("%d",&n);
		A[x] = n;
	}
	
	scanf("%d",&number);
	
	first=0;last=t-1;
	middle=(first+last)/2;
	
	while (A[middle] != number)
	{
		if (number < A[middle])
			last = middle;
		if (number > A[middle])
			first = middle;
		middle=(first+last)/2;
	}
	printf("%d\n",middle);
	return 0;
}
	

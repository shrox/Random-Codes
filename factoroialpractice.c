#include<stdio.h>
#include<math.h>
int main()
{
	int n,x,y,z;
	short int A[500];
	scanf("%d",&n);
	for(x=0;x<500;x++)
		A[x] = -2;
	A[0]=1;
	
	int carry=0;
	for(x=2;x<=n;x++)
	{
		for(y=0;A[y]!=-2 || carry!=0;y++)
		{
			printf("A %d y %d\n",A[y],y);
			if(A[y]==-2)
				A[y]=0;
			z = A[y]*x+carry;
			A[y] = z%10;
			carry = z/10;
		}
	}
	
	for(x=y-1;x>=0;x--)
	{
		printf("%hd",A[x]);
	}
	return 0;
}

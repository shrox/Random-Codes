#include<stdio.h>
#include<ctype.h>

int main()
{
	int count=0;
	char c;
		
	while((c=getchar())	!='\n')
	{
		if(isupper(c))
			count++;
	}
	
	printf("%d\n",count);
	return 0;
}

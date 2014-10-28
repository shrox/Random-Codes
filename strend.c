#include<stdio.h>
#include<string.h>

void strend(char s[],char t[]);

int main()
{
	char s[1000],t[100];
	scanf("%s%s",s,t);
	strend(s,t);
	return 0;
}

void strend(char s[1000],char t[100])
{
	int x=strlen(s)-1,y=strlen(t)-1;

	tag:
	if (s[x] == t[y])
	{
		//printf("s %c t %c y %d\n",s[x],t[y],y);
		x--;
		y--;
		goto tag;
	}
	
	else
	{
		//printf("y %d\n",y);
		if(y==-1)
		{
			printf("1");
		}
		else if(y!=0)
			printf("0");
	}
}
			


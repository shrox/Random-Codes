#include<stdio.h>
#include<string.h>
#include<math.h>

double atof(char s[]);

int main()
{
	char string[1000];
	scanf("%s",string);
	printf("%lf",atof(string));
	return 0;
}

double atof(char s[1000])
{
	int x;
	double ans;
	for(x=0;x<strlen(s);x++)
	{
		z=x;
		if (s[x] == '.')
		{
			for(y=0;y<x;y++)
			{
				s[y] = (s[y] - '0')*pow(10,z);
				z--;
			}
		}
	}
	return 

	

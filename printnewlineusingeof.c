#include <stdio.h>
int main()
{
	int var;
	while((var = getchar()) != EOF)
	{
		if(var != ' ')
		printf("%c" ,var);
	else
		printf("\n");
	}
	return 0;
}


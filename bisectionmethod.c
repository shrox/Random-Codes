#include<stdio.h>
#include<math.h>

double function(double x)
{
	double ans;
	ans = x*x*x - 6*x*x + 11*x - 6;
	return ans;
}

double bisection(double a, double b)
{
	double c=1;
	
	while (function(c) != 0)
	{
		c = (a+b)/2;
		
		if (function(c)<0)
		{
			a = c;
		}
		else if (function(c)>0)
		{
			b = c;
		}
	}
	return c;
}
	
int main()
{
	double m,n;
	scanf("%lf%lf",&m,&n);
	printf("%lf\n",bisection(m,n));
	return 0;
}

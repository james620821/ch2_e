#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	double p = 6763;
	double r = 0.0118;
	double p1=p;
	double p2 = p;
	int y,i;
	double c = 1 + r;
	double a = 1;

	printf("%15s%30s%25s\n", "Years from now", "Population(in millions)","Increase(in million)");

	for (y = 1; y <= 75; y++)
	{ 
		p2 = p1;
		a = 1;
		for (i = 1; i <= y; i++)
		{
			a = c*a;
		}
		p1 = p*a;
		printf("%15d%30.2f%25.2f\n", y, p1, p1 - p2);
	}

	system("pause");
	return 0;
}

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int h,l,u,s;
	double w;

	printf("�q�h��cm? : ");
	scanf("%d",&l);
	printf("��h��cm? : ");
	scanf("%d",&u);
	printf("�C�j�h��cm? : ");
	scanf("%d",&s);

	for (h = l; h <= u; h += s)
	{
		w = (h - 100)*0.9;
		printf("%dcm %.2fkg\n",h,w);
	}
	system("pause");
	return 0;
}

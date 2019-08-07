#include<stdio.h>
void main()
{

	int i,j,k,coef=1;

	for(i=0;i<=5;i++)
	{
		for(j=0;j<5-i;j++)
			printf("  ");

		for(k=0;k<=i;k++)
		{
			if (k==0 || i==0)
				coef = 1;
			else
				coef = coef*(i-k+1)/k;
			printf("%3d", coef);
		}


		printf("\n");
	}
}

#include<stdio.h>
void main()
{
	int i,j,k,l;
	for(i=0;i<5;i++)
	{
		for(j=0;j<4-i;j++)
			printf(" ");

		for(k=0,l=1;k<=i*2;k++,l++)
			printf("%d",l);

		printf("\n");
	}
}

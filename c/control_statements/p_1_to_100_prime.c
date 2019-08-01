#include<stdio.h>
void main()
{

	int count,i,j;
	for(i=2;i<=100;i++)
	{
        	count=0;

		for(j=2; j<i;j++)

		{
			//printf("i= %d j = %d\n",i,j);
			if(i%j==0)
			{
				count++;
				break;
			}


		}

		if(count==0)
			printf("%d\n",i);											

	}


}

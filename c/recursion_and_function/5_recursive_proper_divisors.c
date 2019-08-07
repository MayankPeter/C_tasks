#include<stdio.h>
int factors(int );
void main()
{
int n,sum;
printf("Enter the number\n");
scanf(" %d",&n);

sum  = factors(n);

printf("\nSum = %d\n",sum);
}

int factors(int num)
{
static int i=1;
static int s=0;
if(i<num)
{
if(num%i==0)
{
printf("%d ",i);
s = s + i;
}
i++;
factors(num);
}
else
return s;

}

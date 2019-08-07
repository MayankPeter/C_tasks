#include<stdio.h>
void main()
{
int i,j,k,l;
for(i=0,k=1;i<6;i++,k++)
{
for(j=0,l=1;j<=i;j++,l++)
{
printf("%d ",k*l);
}
printf("\n");
}

}

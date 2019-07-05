//10
#include<stdio.h>
void main()
{
int c=1,b=0,i,j,k,a[10],ele;
ele = sizeof(a)/sizeof(a[0]);
printf("Enter the elements\n");
for(i=0;i<ele;i++)
scanf(" %d",&a[i]);

for(i=0;i<ele-b;i++)
{
for(j=0;j<ele;j++)
{
if(i==j)
continue;

if(a[i]==a[j])
{
b++;
c++;
for(k=j;k<ele;k++)
a[k] = a[k+1];
}
}

if(c==1)
printf("%d, ",a[i]);

c = 1;
}

}

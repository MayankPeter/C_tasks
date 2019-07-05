#include<stdio.h>
void main()
{
int c=1,d=0,i,ele,j,k,l=0,m=0;
printf("Enter the number of elements\n");
scanf(" %d",&ele);
int a[ele],b[ele],e[l],f[m];
printf("Enter the elements\n");
for(i=0;i<ele;i++)
scanf(" %d",&a[i]);

for(i=0;i<ele;i++)
b[i] = a[i];

for(i=0;i<ele-d;i++)
{
for(j=0;j<ele;j++)
{
if(i==j)
continue;

else if(b[i]==b[j])
{
c++;
d++;
for(k=j;k<ele;k++)
{
b[k] = b[k+1];
}
}
}
printf("%d - %d times\n",a[i],c);
c = 1;
}

}

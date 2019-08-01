#include<stdio.h>
void main()
{
char a[20],b[20],d[40];
int l1,l2,i,j,l=0;

printf("Enter two strings\n");
scanf(" %s%s",a,b);

for(i=0;a[i];i++);
for(j=0;b[j];j++);

l1=i;
l2=j;

for(i=0;a[i] && b[i];i++)
{
d[l]=a[i];
l++;
d[l]=b[i];
l++;
}

if(l1>l2)
{
for(;a[i];i++,l++)
{
d[l] = a[i];
}
}
else
for(;b[i];i++,l++)
{
d[l] = b[i];
}

d[l] = '\0';

printf("d = %s\n",d);
}

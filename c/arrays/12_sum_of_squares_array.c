#include<stdio.h>
void main()
{
int i,n;
printf("Enter the number\n");
scanf(" %d",&n);
int s[n];

for(i=0;i<n;i++)
{
s[i] = ((i+1)*(i+1));
}

for(i=0;i<n;i++)
printf("%d ",s[i]);
printf("\n");

for(i=0;i<n;i++)
{
s[i+1] = s[i]+s[i+1];
}

printf("s = %d",s[n-1]);
printf("\n");
}

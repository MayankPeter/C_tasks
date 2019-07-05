#include<stdio.h>
void main()
{

int next,first=0,second=1,i,end;
printf("Enter the ending number\n");
scanf(" %d",&end);

for(i=0;;i++)
{
if(i<=1)
next = i;
else
{
next = first + second;
first = second;
second = next;
}
if(next<end)
printf("%d ",next);
else
break;
}
printf("\n");
}

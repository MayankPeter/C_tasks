#include<stdio.h>
void main()
{
int i,num,next,first=0,second=1;
printf("Enter the numbers to print\n");
scanf(" %d",&num);

for(i=0;i<num;i++)
{
if(i<=1)
next=i;
else
{
next = first + second;
first = second;
second = next;
}

printf("%d ",next);
}

}

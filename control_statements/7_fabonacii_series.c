#include<stdio.h>
void main()
{
int first=0,second=1,num,i,next;
printf("Enter the numbers you want to print\n");
scanf(" %d",&num);

for(i=0;i<num;i++)
{
if(i<=1)
next = i;
else
{
next = first + second;
first = second;
second = next;
}

printf("%d ",next);
}

}

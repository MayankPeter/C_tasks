#include<stdio.h>
int largest_ele(int *, int);
void main()
{
int ele,i,a[5];

ele = sizeof(a)/sizeof(a[0]);

printf("Enter 5 elements\n");
for(i=0;i<ele;i++)
scanf(" %d",&a[i]);

printf("largest element is %d\n",largest_ele(a,ele));
}

int largest_ele(int *p,int ele)
{
if(p<(p+ele))
{
if(*p>large)
large = *p;
largest_ele(p+1,ele);
}
else
return large;
}


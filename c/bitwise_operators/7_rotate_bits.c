#include<stdio.h>
void main()
{
unsigned int num;
int rot,i,opt,last;
printf("Enter the number\n");
scanf("%d",&num);
printf("Enter the number of rotations\n");
scanf("%d",&rot);
printf("Select an option:\n");
printf("1) Left shift\n2) Right shift\n");
scanf("%d",&opt);

for(i=31;i>=0;i--)
printf("%d",num>>i&1);
printf("\n");
//////////////////////////////////////////////////

for(i=0;i<rot;i++)
{

if(opt==2)
{
last = num>>0&1;
num = num>>1;
if(last)
num |= 1<<31;
else
num &= ~(1<<31);
}


else if(opt==1)
{
last = num>>31&1;
num = num<<1;
if(last)
num |= 1<<0;
else
num &= ~(1<<0);
}

/*

if(opt==2)
{
if(last)
num |= 1<<31;
else
num &= ~(1<<31);
}
else if(opt==1)
{
if(last)
num |= 1<<0;
else
num &= ~(1<<0);
}

*/
}
/////////////////////////////////////////////////
for(i=31;i>=0;i--)
printf("%d",num>>i&1);
printf("\n");



}

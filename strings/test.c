#include<stdio.h>
#include<stdlib.h>
void main(int argc ,char **argv)
{
int sum,i,j;
if(argc!=3)
{
printf("Usage : ./a.out 10 + 20 \n");
return;
}

i = atoi(argv[1]);
j = atoi(argv[2]);


sum = i + j;

printf("Sum = %d\n",sum);

}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
int i,j,n;
printf("Enter the number of strings\n");
scanf(" %d",&n);

char **p,*t;

p = malloc(sizeof(char *)*n);

for(i=0;i<n;i++)
p[i] = malloc(sizeof(char)*10);

printf("Enter the strings\n");
for(i=0;i<n;i++)
scanf(" %s",p[i]);

for(i=0;i<n-1;i++)
for(j=0;j<n-1-i;j++)
if(strlen(p[j])>strlen(p[j+1]))
{
t = p[j];
p[j] = p[j+1];
p[j+1] = t;
}

for(i=0;i<n;i++)
printf("%s ",p[i]);
printf("\n");
}

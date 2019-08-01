#include<stdio.h>
#include<string.h>
void main(int argc,char *argv[])
{
if(argc!=2)
{
printf("Usage: ./a.out <filename>\n");
return;
}

char s[20];
FILE *fp = fopen(argv[1],"r+");
if(fp==0)
{
printf("FILE NOT FOUND\n");
return;
}

while(fscanf(fp,"%s",s)!=EOF)
{
s[0] = s[0]&(~32);
fseek(fp,-(strlen(s)),SEEK_CUR);
fprintf(fp,"%s",s);
}
}

#include<stdio.h>
#include<string.h>
void main(int argc,char *argv[])
{
if(argc!=4)
{
printf("Usage: ./a.out <filename> <string_replace> <string_put>\n");
return;
}

FILE *fp = fopen(argv[1],"r+");
char s[20];
if(fp==NULL)
{
printf("file not found\n");
return;
}

while(fscanf(fp,"%s",s)!=-1)
{
if(strcmp(s,argv[2])==0)
{
fseek(fp,-(strlen(s)),SEEK_CUR);
fprintf(fp,"%s",argv[3]);
}
}
}

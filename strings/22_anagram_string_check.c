#include<stdio.h>
#include<string.h>
int my_strcmp(const char *,const char *);
void main()
{
	char s1[20],s2[20],s3[20],t;
	int i,j,l=0,len,ret;
	printf("Enter two strings\n");
	scanf(" %s%s",s1,s2);

	for(i=0;s2[i];i++)
	{
		if(s2[i]>'a' && s2[i]<'z' || s2[i]>'A' && s2[i]<'Z')
		{
			s3[l] = s2[i];
			l++;
		}
	}
	s3[l]='\0';

	for(i=0;s3[i];i++);
	len = i-1;

	for(i=0;i<len-1;i++)
		for(j=0;j<len-1-i;j++)
			if(s3[j]>s3[j+1])
			{
				t = s3[j];
				s3[j] = s3[j+1];
				s3[j+1] = t;
			}

	for(i=0;i<len-1;i++)
		for(j=0;j<len-1-i;j++)
			if(s1[j]>s1[j+1])
			{
				t = s1[j];
				s1[j] = s1[j+1];
				s1[j+1] = t;
			}

	ret = my_strcmp(s1,s3);
	printf("s1=%s s3=%s\n",s1,s3);

	if(ret==0)
		printf("Anagram\n");
	else
		printf("Not Anagram\n");
}

int my_strcmp(const char *p,const char *q)
{
	int i;
	for(i=0;p[i];i++)
		if(p[i]!=q[i])
			break;

	if(p[i]==q[i])
		return 0;
}


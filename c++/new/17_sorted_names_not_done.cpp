#include<iostream>
#include<cstring>
using namespace std;
class name
{

public:
char *ptr;
void set()
{
ptr = new char[20];
cout << "Enter the name" << endl;
scanf(" %s",ptr);
}

void get()
{
cout << *ptr << endl;
}

};

int main()
{
char tmp[20];
name a[5];

for(int i=0;i<5;i++)
{
a[i].set();
}

cout << "Before sorting" << endl;

for(int i=0;i<5;i++)
{
a[i].get();
}

for(int i=0;i<4;i++)
{
for(int j=0;j<4-i;j++)
{
if(strcmp(a[j].ptr,a[j+1].ptr)>0)
{
strcpy(tmp,*a[j].ptr);
strcpy(*a[j].ptr,*a[j+1].ptr);
strcpy(*a[j+1].ptr,tmp);
}
}
}

for(int i=0;i<5;i++)
{
a[i].get();
}
}

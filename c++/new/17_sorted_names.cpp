#include<iostream>
#include<cstring>
using namespace std;
class name
{
char *ptr;

public:
void set()
{
ptr = new char[20];
cout << "Enter the name" << endl;
cin >> ptr;
}

void get()
{
cout << ptr << " ";
}

void sort()
{
name *p[5] = {this,this+1,this+2,this+3,this+4};
char *tmp = new char[20];
for(int i=0;i<4;i++)
{
for(int j=0;j<4-i;j++)
{
if(strcmp(p[j]->ptr,p[j+1]->ptr)>0)
{
strcpy(tmp,p[j]->ptr);
strcpy(p[j]->ptr,p[j+1]->ptr);
strcpy(p[j+1]->ptr,tmp);
}
}
}
}

};
int main()
{
name a[5];

for(int i=0;i<5;i++)
{
a[i].set();
}

cout << endl;
cout << "Before sorting" << endl;

for(int i=0;i<5;i++)
{
a[i].get();
}

a[0].sort();

cout << endl<<endl << "After sorting"  << endl;

for(int i=0;i<5;i++)
{
a[i].get();
}
cout << endl;
}

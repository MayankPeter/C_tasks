#include<iostream>
using namespace std;
int main()
{
int i,a[10];

for(i=0;i<10;i++)
{
cin >> a[i];
}


try
{
for(i=0;i<10;i++)
{
if(a[i]<0)
	throw "Array contains negative number";
cout << a[i] << " ";
}
}

catch(const char *s)
{
cout << endl << "In catch :-)" << endl;
cout << s << endl;
}
cout << "Program Ends" <<  endl;
}


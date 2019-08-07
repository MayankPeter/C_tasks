#include<iostream>
using namespace std;
int main()
{
int a,b;
cout << "Enter two numbers" << endl;
cin >> a >> b;
cout << "Before  " << a << "  " << b << endl;
swap(a,b);
cout<< "After  " << a << "  " << b << endl;
}

void swap(int &a, int &b)
{
a = a+b;
b = a-b;
a = a-b;
}

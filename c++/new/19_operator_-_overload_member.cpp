/* - operator for object of a class */
#include<iostream>
using namespace std;

class A
{
int x;
int y;

public:
A(){}

A(int a,int b)
{
x = a, y = b;
}

void get_data()
{
cout << x << "\t" << y << endl;
}

A operator -(A &a)
{
A ret;
ret.x = x - a.x;
ret.y = y - a.y;
return ret;
}
};


int main()
{
A a1(100,200) ,a2(10,20), a3(5,5), a4;
a1.get_data();
a2.get_data();
a3.get_data();
a4 = a1 - a2 - a3;

cout << endl << "Output :" << endl;
a4.get_data();
}

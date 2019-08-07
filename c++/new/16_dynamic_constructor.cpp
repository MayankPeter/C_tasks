#include<iostream>
using namespace std;

class A
{
int x;
int y;

public:

A()
{
cout << "Default Constructor" << endl;
x = 10, y = 20;
}

A(int a, int b)
{
cout << "Default Constructor" << endl;
x = a, y = b;
}

void get_data()
{
cout << x << "   " << y << endl;
}

};

int main()
{
A *ptr,*ptr1;
ptr = new A;
ptr1 = new A(100,200);
ptr->get_data();
ptr1->get_data();
}

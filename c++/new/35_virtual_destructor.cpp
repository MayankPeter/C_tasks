#include<iostream>
using namespace std;

class A
{
int x;
public:
A()
{
cout << "Constructor A" << endl;
}

/*virtual*/ ~A( )// if virtual all destructors area called in rev order else in virtual absent only A is destroyed
{
cout << "Destructor  A" << endl;
}
};

class B:public A
{
int y;
public:
B()
{
cout << "Constructor B" << endl;
}

~B()
{
cout << "Destructor  B" << endl;
}
};

class C:public B
{
int z;
public:
C()
{
cout << "Constructor C" << endl;
}

~C()
{
cout << "Destructor  C" << endl;
}
};

int main()
{
A *ptr;
ptr = new C;
delete ptr;// if delete is not there destructor is not called
}

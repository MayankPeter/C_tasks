#include<iostream>
using namespace std;

class complex
{
int real, img;

public:
void set_com(complex);
};

void complex::set_com(complex b)
{
int n=1;
int ar,ai,dr,di;

cout << "Enter real and imaginary part of complex number: " << n++ << endl;
cin >> real >> img;
cout << "Enter real and imaginary part of complex number: " << n << endl;
cin >> b.real >> b.img;

ar = real+b.real;
ai = img+b.img;

dr = real-b.real;
di = img-b.img;

if(ai>=0)
cout << "Sum = " << ar << "+" << ai << "i" << endl;
else
cout << "Sum = " << ar << ai << "i" << endl;
if(di>=0)
cout << "Diff = " << dr << "+" << di << "i" << endl;
else
cout << "Diff = " << dr << di << "i" << endl;
}

int main()
{
complex a1,a2;
a1.set_com(a2);
}

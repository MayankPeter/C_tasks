#include<iostream>
#include<cmath>
using namespace std;

float area(float l, float b)
{
return l*b;
}

float area(float r)
{
return 2*3.14*r;
}

float area(float s1, float s2, float s3)
{
float s = (s1+s2+s3)/2;
float result = sqrt(s*(s-s1)*(s-s2)*(s-s3));
return result;
}

int main()
{
float a_tri = area(1.4,2.8,3.1);
float a_circle = area(1.1);
float a_rec = area(1.1,2.2);
cout << "Area tri: " << a_tri << " Area cir: " << a_circle << " Area rec: " << a_rec << endl;
}

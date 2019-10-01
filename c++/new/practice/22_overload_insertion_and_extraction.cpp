#include<iostream>
using namespace std;

template<class type1,class type2>
class A
{
type1 a;
type2 b;

public:
void set_data(); 
void get_data();

template<class type3,class type4>
friend ostream& operator <<(ostream &,const A<type3,type4> &);

template<class type5,class type6>
friend istream& operator >>(istream &,A<type5,type6> &);
};


template<class type5,class type6>
istream& operator >>(istream &in,A<type5,type6> &m)
{
cout << "Enter the two data" << endl;
in >> m.a >> m.b;
return in;
}

template<class type3,class type4>
ostream& operator <<(ostream &out,const A<type3,type4> & m)
{
out << m.a << "   " << m.b;
return out;
}


template<class type1,class type2>
void A<type1,type2>::set_data()
{
cout << "Enter the two data: " << endl;
cin >> a >> b;
}

/*
template<class type1,class type2>
void A<type1,type2>::get_data()
{
cout << a << "   " <<  b << endl;
}
*/

int main()
{
A<int,char>obj;
//obj.set_data();
cin >> obj;
cout << obj << endl;;
}

#include<iostream>
using namespace std;

//template<class type> class data; //this declaration works fine
//template<class type> data<type> operator +(const data<type>&,const data<type>&); //this declaration works fine

template<class type>
class data
{
type a[5];

public:
void set_data();
void get_data();

template<class type1> friend data<type1> operator +(const data<type1>&,const data<type1>&); // must take another name(e.g. type1 to avoid         								shadowing first one (e.g. type)) since it does not belong to this class
};

template<class type>
void data<type>::set_data()
{
cout << "Enter the data" << endl;
for(int i=0;i<5;i++)
cin >> a[i];
}

template<class type>
void data<type>::get_data()
{
for(int i=0;i<5;i++)
cout << a[i] << " ";
}


template<class type1>
data<type1> operator +(const data<type1>& m,const data<type1>& n)
{
data<type1>temp;
for(int i=0;i<5;i++)
temp.a[i] = m.a[i] + n.a[i];
return temp;
}

using namespace std;
int main()
{
data<int>obj1;
data<int>obj2;
data<int>obj3;

obj1.set_data();
obj2.set_data();

obj3 = obj1+obj2;

obj3.get_data();
}

#include<iostream>
using namespace std;
void swap(int &,int &);
void swap(float &,float &);
void swap(char &,char &);

int main()
{
int n;
cout << "choose an option :" << endl << "1) swap integers" << endl << "2) swap float" << endl << "3) swap characters"<< endl;

cin >> n;
switch(n)
{
case 1: int a,b;	
	cin >> a>>b;
	cout<<"Before swap: "<<a<<"  "<<b<<endl;
	swap(a,b);
	cout<<"After swap: "<<a<<"  "<<b<<endl;
	break;
case 2: float c,d;
	cin>>c>>d;	
	cout<<"Before swap: "<<c<<"  "<<d<<endl;
	swap(c,d);
	cout<<"After swap: "<<c<<"  "<<d<<endl;
	break;
case 3: char e,f;
	cin>>e>>f;	
	cout<<"Before swap: "<<e<<"  "<<f<<endl;
	swap(e,f);
	cout<<"After swap: "<<e<<"  "<<f<<endl;
	break;
default :cout<<"Invalid Option";
}

}

void swap(int &a,int &b)
{
a = a+b;
b = a-b;
a = a-b;
}
void swap(float &a,float &b)
{
a = a+b;
b = a-b;
a = a-b;
}
void swap(char &a,char &b)
{
a = a+b;
b = a-b;
a = a-b;
}

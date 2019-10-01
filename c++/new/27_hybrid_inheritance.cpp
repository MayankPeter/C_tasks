/* hybrid inheritance */

#include<iostream>
using namespace std;

/*-------------------------------------------------------------------*/
class students
{
int roll;
char name[20];
public:
students()
{
cout << "Enter roll number and name" << endl;
cin >> roll >> name;
}
void get_data()
{
cout << roll << "  " <<name << endl;
}
};

/*---------------------------------------------------------------------*/

class exam:public students
{
protected:
float hindi;
float english;
float maths;
float science;
float social;
float computer;
public:

exam():students()
{
cout << "Enter marks of Hindi, English, Maths, Science, Social, Computer" << endl;
cin >> hindi >> english >> maths >> science >> social >> computer;
}

void get_data()
{
students::get_data();
cout  << "Subject wise marks  " << hindi << " " << english << " " << maths << " " << science << " " << social<< " " << computer; 
}
};

/*------------------------------------------------------------------------*/

class school
{
string school_name;
public:

school()
{
cout << "Enter school Name" << endl;
getline(cin,school_name);
}

void get_data()
{
cout<< endl << "School name is " << school_name <<endl;
}
};

/*--------------------------------------------------------------------------*/

class result:public exam,public school
{
float total_marks;
public:
result():exam(),school()
{
total_marks = exam::hindi + exam::english + exam::maths + exam::science + exam::social + exam::computer;
}

void get_data()
{
exam::get_data();
school::get_data();
cout << "Total Marks = " << total_marks << endl;
}
};

/*-----------------------------------------------------------------------------*/

int main()
{
result obj;
obj.get_data();

}

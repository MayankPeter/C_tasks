/* Multilevel inheritance */
#include<iostream>
using namespace std;

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

class result:public exam
{
float total_marks;
public:
result():exam()
{
total_marks = exam::hindi + exam::english + exam::maths + exam::science + exam::social + exam::computer;
}

void get_data()
{
exam::get_data();
cout << endl << "Total Marks = " << total_marks << endl;
}
};

int main()
{
result obj;
obj.get_data();

}

/* review some error is there */
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
int i=0,k=0;
int pos;
fstream file;
string s[10]; // for 10 lines file
file.open("data",ios::in|ios::out);


while(getline(file,s[k]))
{
cout << ++i <<") "<< s[k++] << endl;
}

cout << "Enter the position to delete" << endl;
cin >> pos;

file.close();

/*-----------------------------------------------------------*/

file.open("data",ios::out|ios::trunc);

int j = 0;
while(j<=i-1)
{
if(j!=pos-2)
file << s[j] << endl;
j++;
}
}

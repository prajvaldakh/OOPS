#include <iostream>
using namespace std;

class person

{
public:

string name;
int age;
int contact;

void input()
{
cout<<"ENTER NAME OF STUDENT: "<<name<<endl;
cout<<"ENTER AGE OF STUDENT: "<<age<<endl;
cout<<"ENTER CONTACT OF STUDENT: "<<contact<<endl;
}
};

class student: public person
{
public:
int rollno;
string branch;

void show()
{
cout<<"ROLL NUMBER OF THE STUDENT: "<<rollno<<endl;
cout<<"BRANCH OF THE STUDENT: "<<branch<<endl;
}
};
int main()
{
student s1,s2;
s1.name = "PARTH";
s1.age = 20;
s1.contact = 56723;
s1.rollno = 35;
s1.branch = "SOAI";

s2.name = "VIRAT";
s2.age = 18;
s2.contact = 653423;
s2.rollno = 17;
s2.branch = "SOAI";

cout<<"-----------STUDENT 1 DETAILS----------"<<endl;
s1.input();
s1.show();
cout<<"-----------STUDENT 2 DETAILS--------"<<endl;
s2.input();
s2.show();

return 0;
}

#include<iostream>
using namespace std;

class employee
{
public:
int eid;
string ename;
float esalary;

void input()

{

cout<<"eid id: "<<endl;
cin>>eid;
cout<<"emp namea: "<<endl;
cin>>ename;
cout<<"emp salary: "<<endl;
cin>>esalary;

}

void display()
{

cout<<"Enter Emp id: "<<eid<<endl;
cout<<"Enter Name: "<<ename<<endl;
cout<<"Enter Salary; "<<esalary<<endl;

}

};

int main()
{

employee e1;

e1.input();
e1.display();

return 0;
}

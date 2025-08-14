// EXPERIMENT-11
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3

#include <iostream>
#include<string>
using namespace std;

class Student{
    public:
    string name;
    string branch;
    string subject;
    string year;
    float result;
};

int main(){
    Student s1;
    s1.name="Maitraiyee";
    s1.branch="E&Tc";
    s1.subject="C++";
    s1.result=8.6;
    cout<<"The first student's name is: "<<s1.name<<endl;
    cout<<"The first student's branch is: "<<s1.branch<<endl;
    cout<<"The first student's subject is: "<<s1.subject<<endl;
    cout<<"The first student's result is: "<<s1.result<<endl;
    cout<<endl;
    
    Student s2;
    s2.name="Maitreyee";
    s2.branch="E&Tc";
    s2.subject="C++";
    s2.result=8.9;
    cout<<"The second student's name is: "<<s2.name<<endl;
    cout<<"The second student's branch is: "<<s2.branch<<endl;
    cout<<"The second student's subject is: "<<s2.subject<<endl;
    cout<<"The second student's result is: "<<s2.result<<endl;
    return 0;
}

/* Output :

The first student's name is: Maitraiyee
The first student's branch is: E&Tc
The first student's subject is: C++
The first student's result is: 8.6

The second student's name is: Maitreyee
The second student's branch is: E&Tc
The second student's subject is: C++
The second student's result is: 8.9

*/

// EXPERIMENT-11
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3

#include <iostream>
using namespace std;
#include<string>

int main() {
    
    class Rectangle{
       public:
       int length;
       int width;
       
       void area(){
           cout<<(length*width);
       }
       
    };
    
Rectangle R1;
cout<<"Enter the length ";
cin>>R1.length;
cout<<"Enter the width ";
cin>>R1.width;

cout<<"The area of the rectangle R1 is: "<<endl;
R1.area();
    
}

//Output
//Enter the length: 20
//Enter the width: 10
//The area of the rectangle R1 is: 200

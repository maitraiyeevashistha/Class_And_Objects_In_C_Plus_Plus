// EXPERIMENT-11
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3

#include <iostream>
using namespace std;
#include<string>

int main() {
    
    class Calc{
       public:
       int A;
       int B;
       
       void add(){
           cout<<(A+B);
       }
       
       void subtract(){
           cout<<(A-B);
       }
       
       void divide(){
        cout<<(A/B);
       }
       
       void multiply(){
        cout<<(A*B);
       }
       
       
    };
    
Calc C1;
cout<<"Enter the first number ";
cin>>C1.A;
cout<<"Enter the second number  ";
cin>>C1.B;

    cout << "The addition is: "<<endl;
    C1.add();
    
    cout<<" "<<endl;

    cout << "The subtraction is: "<<endl;
    C1.subtract();
    
    cout<<" "<<endl;

    cout << "The division is: "<<endl;
    C1.divide();
    
    cout<<" "<<endl;

    cout << "The multiplication is: "<<endl;
    C1.multiply();
    
    cout<<" "<<endl;

    return 0;
}

/*Output:
Enter the first number 5
Enter the second number  10
The addition is: 
15 
The subtraction is: 
-5 
The division is: 
0 
The multiplication is: 
50 
*/

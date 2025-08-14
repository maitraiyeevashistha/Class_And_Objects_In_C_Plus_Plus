// EXPERIMENT-11
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3

#include <iostream>
#include<string>
using namespace std;

class Car{
    public:
    string Brand;
    string Name;
    int Car_ID;
    int Quantity;
    float cost;
};

int main(){
    int x;
    int id;
    int a;
    int i;
    cout<<"Enter if you would like to enter a new car (1) or see information about an existing car(2)";
    cin>>a;
    if(a==1){
        cout<<"Enter the number of cars you need to input: ";
        cin>>x;
        for(i=1;i<x;i++){
            Car ci;
            cout<<"enter the Brand of the car: ";
            cin>> ci.Brand;
    
            cout<<"enter the Name of the car: ";
            cin>> ci.Name;
        
            cout<<"enter the Car code: ";
            cin>> ci.Car_ID;
    
            cout<<"enter the Quantity of the car: ";
            cin>> ci.Quantity;
        
            cout<<"enter the cost of the car: ";
            cin>> ci.cost;
        }
    }
    else if(a==2){
        for(i=1;i<x;i++){
            cout<<"Enter the ID of car: ";
            cin>>id;
            if(id==ci.Car_ID){
            
                cout<<"the brand of the car is :"<<ci.Brand;
                cout<<"the name of the car is :"<<ci.Name;
                cout<<"the Quantity of the car is :"<<ci.Quantity;
                cout<<"the Cost of the car is :"<<ci.cost;
            
            }
            else{
                cout<<"Unfortunately , we do not have tht car";
            }
        }
    }
        
    
    

    return 0;
}


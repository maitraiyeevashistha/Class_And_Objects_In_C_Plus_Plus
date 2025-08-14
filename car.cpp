#include <iostream>
#include<string>
using namespace std;

class Car{
    public:
    string Brand;
    string Name;
    string Car_ID;
    string Quantity;
    float cost;
};

int main(){
    int x;
    int id;
    cout<<"Enter the number of cars you need to input: ";
    cin>>x;
    for(int i=1;i<x;i++){
        Car ci;
        cout<<"enter the Brand of the car: ";
        cin>> ci.Brand;
        cout<<endl;
        cout<<"enter the Name of the car: ";
        cin>> ci.Name;
        cout<<endl;
        cout<<"enter the Car code: ";
        cin>> ci.Car_ID;
        cout<<endl;
        cout<<"enter the Quantity of the car: ";
        cin>> ci.Quantity;
        cout<<endl;
        cout<<"enter the cost of the car: ";
        cin>> ci.cost;
        cout<<endl;
    }
    cout<<"Enter the ID of car: ";
    cin>>id;
    for(int i=1;i<x;i++){
        if(id==ci.Car_ID){
            cout<<"We have that car in stock !"<<end;
            cout<<"the brand of the car is :"<<ci.Brand;
            cout<<"the name of the car is :"<<ci.Name;
            cout<<"the Quantity of the car is :"<<ci.Quantity;
            cout<<"the Cost of the car is :"<<ci.Cost;
            
        }
        else{
            cout<<"Unfortunately , we do not have tht car";
        }
    }
    

    return 0;
}

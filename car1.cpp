#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string Brand;
    string Name;
    string Car_ID;
    string Quantity; // Keeping as string because you had it this way
    float cost;
};

int main() {
    int x;
    cout << "Enter the number of cars you need to input: ";
    cin >> x;

    Car cars[100]; // simple static array big enough for most cases

    for (int i = 0; i < x; i++) { // start from 0
        cout << "Enter the Brand of the car: ";
        cin >> cars[i].Brand;
        cout << "Enter the Name of the car: ";
        cin >> cars[i].Name;
        cout << "Enter the Car code: ";
        cin >> cars[i].Car_ID;
        cout << "Enter the Quantity of the car: ";
        cin >> cars[i].Quantity;
        cout << "Enter the cost of the car: ";
        cin >> cars[i].cost;
        cout << endl;
    }

    string id; // match Car_ID type
    cout << "Enter the ID of car: ";
    cin >> id;

    bool found = false;
    for (int i = 0; i < x; i++) {
        if (id == cars[i].Car_ID) {
            cout << "We have that car in stock!" << endl;
            cout << "The brand of the car is: " << cars[i].Brand << endl;
            cout << "The name of the car is: " << cars[i].Name << endl;
            cout << "The Quantity of the car is: " << cars[i].Quantity << endl;
            cout << "The Cost of the car is: " << cars[i].cost << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Unfortunately, we do not have that car" << endl;
    }

    return 0;
}
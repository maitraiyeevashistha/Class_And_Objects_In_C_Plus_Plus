// EXPERIMENT-11
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3
#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string Brand;
    string Name;
    string Car_ID;
    string Quantity; 
    float cost;
};

int main() {
    int x;
    cout << "Enter the number of cars you need to input: ";
    cin >> x;

    Car cars[100]; 

    for (int i = 0; i < x; i++) { 
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

    string id;
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

/*Output :
Enter the number of cars you need to input: 2
Enter the Brand of the car: tayota
Enter the Name of the car: ABC
Enter the Car code: DEF
Enter the Quantity of the car: FIFTY
Enter the cost of the car: 1500000

Enter the Brand of the car: ghi
Enter the Name of the car: jkl
Enter the Car code: mno
Enter the Quantity of the car: seventy
Enter the cost of the car: 1200000

Enter the ID of car: defg
Unfortunately, we do not have that car

*/

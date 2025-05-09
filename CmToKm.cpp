#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double value;
    int choice;

    cout << "Unit Converter\n";
    cout << "1. Centimeter to Kilometer\n";
    cout << "2. Kilometer to Centimeter\n";
    cout << "Enter your choice (1 or 2)";
    cin >> choice;

    if(choice == 1) {
        cout << "Enter value in centimeters: ";
        cin >> value;
        double km = value / 1000000;
        cout << fixed << " cm = " << " km\n";
    } else if (choice == 2) {
        cout << "Enter value in kilometers: ";
        cin >> value;
        double cm = value * 1000000;
        cout << fixed << setprecision(2);
        cout << value << " km = " << cm << " cm\n";
    }else {
        cout << "invalid choice\n";
    }

    return 0;
}

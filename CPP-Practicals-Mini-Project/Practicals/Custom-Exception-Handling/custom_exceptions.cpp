#include <iostream>
#include <string>
using namespace std;

class MyException {
public:
    string msg;

    MyException(string m) {
        msg = m;
    }
};

int main() {
    int age;
    float income;
    string city, vehicle;

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter Monthly Income: ";
    cin >> income;

    cout << "Enter City: ";
    cin >> city;

    cout << "Do you have a 4-wheeler (Yes/No): ";
    cin >> vehicle;

    try {
        if (age < 18 || age > 55) {
            throw MyException("Age must be between 18 and 55.");
        }

        if (income < 50000 || income > 100000) {
            throw MyException("Income must be between Rs. 50,000 and Rs. 1,00,000.");
        }

        if (city != "Pune" && city != "Mumbai" &&
            city != "Bangalore" && city != "Chennai") {
            throw MyException("City must be Pune, Mumbai, Bangalore or Chennai.");
        }

        if (vehicle != "Yes" && vehicle != "yes") {
            throw MyException("User must have a 4-wheeler.");
        }

        cout << "\nUser meets all the criteria!";
    }

    catch (MyException e) {
        cout << "\nException: " << e.msg;
    }

    catch (...) {
        cout << "\nUnknown Exception Occurred!";
    }

    return 0;
}

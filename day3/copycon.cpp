#include<iostream>
using namespace std;

class car {
public:
    string brand;
    int speed;

    car(string b, int s) { // Parameterized constructor
        brand = b;
        speed = s;
        cout << "Parameterized constructor called" << endl;
    }

    car(const car &c) {
        brand = c.brand;
        speed = c.speed;
        cout << "Copy constructor called" << endl;
    }

    void drive() {
        cout << "Brand: " << brand << ", Speed: " << speed << endl;
    }
};


int main() {
    car original("Toyota", 120);
    original.drive();

    car copy = original; // Calls the copy constructor
    copy.drive();

    return 0;
}
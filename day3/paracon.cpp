#include<iostream>
using namespace std;

class car {
    public:
    string brand;
    int speed;

    car(string b, int s) {
        brand = b;
        speed = s;
        cout << "Parameterized constructor called" << endl;
    }
};
int main() {
    car c1("Toyota", 120);
    cout << "Brand: " << c1.brand << ", Speed: " << c1.speed << endl;
    return 0;
}
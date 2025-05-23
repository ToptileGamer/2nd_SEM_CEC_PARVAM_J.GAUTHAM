#include<iostream>
using namespace std;

class car {
    public:
    string brand;
    int speed;

    car() {
        brand = "john";
        speed = 0;
        cout << "Default constructor called" << endl;
    }
};

int main() {
    car c1;
    cout << "Brand: " << c1.brand << ", Speed: " << c1.speed << endl;
    return 0;
}
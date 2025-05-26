#include<iostream>
using namespace std;

class vehicle {
public:
    void start() {
        cout << "Vehicle is starting..." << endl;
    }
};
class Car : public vehicle {
    public:
    void drive() {
        cout << "Car is driving..." << endl;
    }
};

    class bike : public vehicle {
        public:
        void drive() {
            cout << "Bike is driving..." << endl;
        }
};
int main () {
    Car myCar;
    myCar.start();
    myCar.drive();
    bike myBike;
    myBike.drive();
    return 0;
}

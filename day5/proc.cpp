#include<iostream>
using namespace std;

class Base {
protected:
    int x;
};
class Derived : public Base {
public:
    void setX(int val) {
        x = val; // allowed
}
void display() {
    cout << "Value of x: " << x << endl;
}
};

int main(){
    Derived d;
    d.setX(10);
    d.display();
}
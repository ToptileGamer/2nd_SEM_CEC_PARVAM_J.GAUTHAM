#include<iostream>
using namespace std;

class Test {
public:
    Test() { cout << "Object created\n"; }
    ~Test() { cout << "Object destroyed\n"; }
};

void func() {
    Test t;
}

int main() {
    func();
    return 0;
}
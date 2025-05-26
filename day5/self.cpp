#include<iostream>
using namespace std;

class Employee {
public:
    static int count;
    Employee() { count++; }
};

int Employee::count = 0;

class Manager : public Employee { };

int main() {
    Employee e1, e2;
    Manager m1;
    cout << Employee::count;
}
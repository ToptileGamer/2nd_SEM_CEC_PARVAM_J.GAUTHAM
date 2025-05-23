#include <iostream>
using namespace std;

class student {
    public:
    string name;
    int age;
    student(string n, int a) { // Parameterized constructor
        name = n;
        age = a;
    }
    student(const student &s) { // Copy constructor
        name = s.name;
        age = s.age;
    }
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main() {
    student s1("John", 20);
    student s2 ("narendra", 21);
    student s3 ("msaa", 22); 
    student s4 = s1;
    student s5 = s2;
    student s6 = s3;
    
     
    s1.display(); 
    s2.display(); 
    s3.display();
    s4.display(); 
    s5.display();
    s6.display();
    return 0;
}
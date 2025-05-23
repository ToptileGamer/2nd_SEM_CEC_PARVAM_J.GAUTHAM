#include<iostream>
using namespace std;

class student {
    public:
    student() {
        cout<<"Constructor called"<<endl;
    }
};
int main() {
    student s1; // Constructor is called when an object is created
    return 0;
}
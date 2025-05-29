#include<iostream>

using namespace std;

class Dog
{
public:
    void bark()
    {
        cout << "Woof! Woof!" << endl;
    }
};

int main()
{
    Dog *d = new Dog(); 
    d->bark();
    delete d;
    return 0;
}
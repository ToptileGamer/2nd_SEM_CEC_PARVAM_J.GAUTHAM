#include<iostream>
using namespace std;

class shape {
public:
    virtual void draw() = 0; // Pure virtual function
};

class circle : public shape 
{
public:
    void draw() override
    {
        cout << "Drawing a circle." << endl;
    }
};

int main() {
    circle c;
    c.draw();
    return 0;
}
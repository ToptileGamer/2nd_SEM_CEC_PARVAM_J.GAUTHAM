#include<iostream>
using namespace std;

class shape
{
public:
    void setcolor(string c)
    {
        cout << "The color of the shape is " << c << endl;
    }

};

class circle : public shape
{
    public:
    void drawcircle()
    {
        cout << "Drawing a circle..." << endl;
    }
};

class rectangle : public shape
{
    public:
    void drawrectangle()
    {
        cout << "Drawing a rectangle..." << endl;
    }
};

int main()
{
    circle myCircle;
    myCircle.setcolor("Red");
    myCircle.drawcircle();

    rectangle myRectangle;
    myRectangle.setcolor("Blue");
    myRectangle.drawrectangle();

    return 0;
}
#include <iostream>
using namespace std;

class rectangle {
    private:
    int length,width;
    public:
    void setdata(int l,int w) {
        length=l;
        width=w;
    }
    void displayArea() {
        cout<<"Area of rectangle is: "<<length*width<<endl;
    }
};
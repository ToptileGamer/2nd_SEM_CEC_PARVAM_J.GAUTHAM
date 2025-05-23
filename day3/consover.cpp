#include<iostream>
using namespace std;

class box
{
    public:
    int length;
    box()
    {
        length = 0;
        
    }
    box(int l)
    {
        length = l;
    }
    void display()
    {
        cout << "Length of box is : " << length << endl;
    }
};
int main()
{
    box b1;
    box b2(10);
    b1.display();
    b2.display();
    return 0;
}
#include<iostream>
using namespace std;

class item
{
private:
    int quatitiy;
    float price;
public:
    item(int q = 0, float p = 0.0) : quatitiy(q), price(p) {}

    item operator+(const item &i)
    {
        return item(quatitiy + i.quatitiy, price + i.price);
    }

    bool operator==(const item &i)
    {
        return (quatitiy == i.quatitiy && price == i.price);
    }
    friend ostream& operator<<(ostream &os, const item &i)
    {
        os << "Quantity: " << i.quatitiy << ", Price: " << i.price;
        return os;
    }
};

int main(){
    item i1(10, 5.0);
    item i2(20, 15.0);
    item i3 = i1 + i2; // Using the overloaded + operator
    cout << "Item 1: " << i1 << endl;
    cout << "Item 2: " << i2 << endl;
    cout << "Item 3 (i1 + i2): " << i3 << endl;

    if (i1 == i2) {
        cout << "Item 1 and Item 2 are equal." << endl;
    } else {
        cout << "Item 1 and Item 2 are not equal." << endl;
    }
    if (i1 == i3) {
        cout << "Item 1 and Item 3 are equal." << endl;
    } else {
        cout << "Item 1 and Item 3 are not equal." << endl;
    }
    return 0;
}
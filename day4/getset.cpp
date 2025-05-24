#include <iostream>
using namespace std;

class items
{
private:
    int itemno;
    float price;
    int quantity;
public:
    void setitemno(int x)
{
    itemno = x;
}
    void setprice(float y)
{
    price = y;
}
    int getitemno()
{
    return itemno;
}
    float getprice()
{
    return price;
}
int setquantity(int z)
{
    quantity = z; 
}
int getquantity()
{
    return quantity;
}
};

int main()
{
    items i1;
    i1.setitemno(101);
    i1.setprice(99.99);
    i1.setquantity(25);
    cout << "Item number: " << i1.getitemno() << endl;
    cout << "Price: " << i1.getprice() << endl;
    cout << "Quantity: " << i1.getquantity() << endl;
    return 0;
}
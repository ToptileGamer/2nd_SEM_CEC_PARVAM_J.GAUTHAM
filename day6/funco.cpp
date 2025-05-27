#include <iostream>
 using namespace std;

class invoice {
public:
    void genin(int proid)
    {
        cout << "Generating invoice for product ID: " << proid << endl;
        cout << "default quatity is 1 |  no discount applied" << endl;
    }
    void genin(int proid, int qty)
    {
        cout << "Generating invoice for product ID: " << proid << endl;
        cout << "Quantity: " << qty << endl;
        cout << "No discount applied" << endl;
    }
    void genin(int proid, int qty, double disc)
    {
        cout << "Generating invoice for product ID: " << proid << endl;
        cout << "Quantity: " << qty << endl;
        cout << "Discount: " << disc << "%" << endl;
    }
};

int main ()
{
    invoice inv;
    inv.genin(101);
    inv.genin(102, 5);
    inv.genin(103, 10, 15.0);
    return 0;
}
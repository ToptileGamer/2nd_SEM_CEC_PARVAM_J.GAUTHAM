#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

class Item {
private:
    string name;
    float price;
    int quantity;

public:
    Item(string n = "", float p = 0.0, int q = 0) : name(n), price(p), quantity(q) {}
    

    Item operator+(const Item &other) {
        return Item(name + " & " + other.name, quantity + other.quantity, price + other.price);

    }
    bool operator==(const Item &other) {
        return (name == other.name && price == other.price && quantity == other.quantity);
    }

    friend ostream& operator<<(ostream &os, const Item &item) {
        os << left << setw(15) << item.name
        << setw(10) << item.quantity 
        << "$" << fixed << setprecision(2) << item.price;
        return os;
    }

    string getName() const { return name; }
    int getQuantity() const { return quantity; }
    float getPrice() const { return price; }
};

class invoice {
public: 
    void genin(const Item &item)
    {
        cout << "----Invoice basic ----" << endl;
        cout <<item << endl;
        cout << "total price: $" << item.getPrice() << endl;
    }

    void genin(const Item &item, int qty)
    {
        cout << "----Invoice with quantity ----" << endl;
        cout << item.getName() << " x " << qty << endl;
        cout << "Price per item: $" << item.getPrice() << endl;
        cout << "Total price: $" << total << endl;
    }

    void genin(const Item &item, int qty, double disc)
    {
        cout << "----Invoice with discount ----" << endl;
        cout << item.getName() << " x " << qty << endl;
        cout << "Price per item: $" << item.getPrice() << endl;
        double total = item.getPrice() * qty;
        double discountAmount = total * (disc / 100);
        total -= discountAmount;
        cout << "Discount: " << disc << "%" << endl;
        cout << "Total price after discount: $" << total << endl;
    }
};
    int main (){
         
        Item item1("Widget", 19.99, 2);
        Item item2("Gadget", 29.99, 1);
        Item item3("Thingamajig", 15.99, 3);

        cout << " ===inventory Items== " << endl;
        cout << left << setw(15) << "Name" << setw(10) << "Quantity" << "Price" << endl;
        cout << item1 << endl;
        cout << item2 << endl;

        cout << "\n ===Invoice Generation=== " << endl;
        Item combined = item1 + item2;
        cout << "Combined Item: " << combined << endl;

        cout << "\n ===compare Items === " << endl;
        if (item1 == item3) {
            cout << "Item 1 and Item 3 are identical." << endl;
        } else 
        {
            cout << "\n ===Invoice Generation=== " << endl;
        }
        
        invoice inv;
        cout << "\nGenerating invoices..." << endl;
        inv.genin(item1);
        inv.genin(item2, 3);
        inv.genin(item3, 2, 10.0f);
        return 0;


    }

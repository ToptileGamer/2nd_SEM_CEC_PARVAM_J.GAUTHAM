#include<iostream>
using namespace std;

class book
{
    public:
    string title;
    string author;
    float price;

    book(string t, string a, float p) : title(t), author(a), price(p){}
    
    void display(){
        cout << "title" << title << "author" << author << "price" << "price: $" << price << endl;
    }
};

int main()
{
    book b("c++ programming", "Bjarne Stroustrup", 29.99);
    b.display();
    return 0;
}
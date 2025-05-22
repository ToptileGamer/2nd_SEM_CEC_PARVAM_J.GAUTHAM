#include <iostream>
using namespace std;

class book {
    public:
    string title;
    string author;
    string name;
    void display(){
        cout << "Title: " << title << "author: " << author << "name: " << name << endl;
    }
};

    int main(){
        book b1;
        b1.title = "C++";
        b1.author = "Bjarne Stroustrup";
        b1.name = "C++ Programming Language";
        b1.display();
        return 0;
    }


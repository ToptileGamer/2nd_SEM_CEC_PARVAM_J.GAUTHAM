#include <iostream>
 using namespace std;

class print {
public:
    void display(int num)
    {
        cout << "printing number: " << num << endl;
    }
    void display(string name)
    {
        cout << "printing name: " << name << endl;
    }
};

int main ()
{
    print p;
    p.display(10);
    p.display("John Doe");
    return 0;
}
#include <iostream>
using namespace std;

class car {
    public:
    string brand;
    string brand1;
    void start(){
        cout << brand << " is starting" << endl;
    }
    void stop(){
        cout << brand1 << " is stopping" << endl;
    }
};
int main() {
    car c1,c2;
    c1.brand = "BMW";
    c1.start();

    
    c2.brand1 = "Mercedes";
    c2.stop();
    return 0;
}
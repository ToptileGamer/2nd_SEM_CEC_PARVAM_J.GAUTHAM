#include <iostream>
using namespace std;

class bus{
    public:
    string bus_name;
    string bus_number;
    int capacity;
    string route;

    void display(){
        cout << "Bus Name : " << bus_name << endl;
        cout << "Bus Number : " << bus_number << endl;
        cout << "capacity : " << capacity<< endl;
        cout << "Route : " << route << endl;
    }
};
int main(){
    bus b1;
    b1.bus_name = "Volvo";
    b1.bus_number = "KA-01-1234";
    b1.capacity = 40;
    b1.route = "CITY CENTRE TO AIRPORT";
    b1.display();
    
    return 0;
    }

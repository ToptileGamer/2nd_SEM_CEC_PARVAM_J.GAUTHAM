#include <iostream>
using namespace std;

class student {
    public:
    string name;
    int age;
    int usn;
    string clgname;
    student(string n, int a, int u, string c) {
        clgname = c; 
        name = n;
        age = a;
        usn = u;
        cout << "Student name : " << name << " ,age : " << age  << " usn : "<< usn << " college name :" << clgname << endl;
    }
};

int main() {
    student s1("pavan" , 21, 124032 , "CEC"); 
    student s2("goutham" , 41, 1242 , "jss");
    student s3("siddhi" , 34, 1032 , "NMIT");
    
    return 0;
}
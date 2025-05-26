#include<iostream>
using namespace std;

class person{
    public:
    void setperson(){
    string name = "pavan";
    }
};

class graduatestudent : public person
{
    public:
    void setstudent(){
        string name = "pavan";
        cout << "the name of student is " << name <<endl;
    }
};

class employee{
    public:
    void setemployee(){
        string name = "pavan";
        cout << "the name of employee is " << name << endl;
    }
};

class teachingassistant : public graduatestudent, public employee {
    public:
    void setassistant(){
        string name = "Boanerges";
        cout << "the name of assistant is " << name << endl;
    }
};

class professer {
    public:
    void setprofesser(){
        string name = "pavan";
        cout << "the name of professer is "<< name <<endl;
    }
};

int main(){
    graduatestudent g1;
    g1.setstudent();
    employee e1;
    e1.setemployee();
    teachingassistant t1;
    t1.setassistant();
    professer p1;
    p1.setprofesser();
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

class Hospital
{
    public:
    string complainantName;

    Hospital(string name): complainantName(name) {}

    virtual void registerCase() = 0;
};

class headace : public Hospital
{
    public:
    headace( string name ) : Hospital(name) {}
    void registerCase() override
    {
        cout << "headace  registered for " << complainantName << "." << endl;
        cout << " Action Investigation under progress" << endl;
}
};

class fever : public Hospital
{
    public:
    fever( string name ) : Hospital(name) {}
     
    void registerCase() override
    {
        cout << "high fever for  " << complainantName << "." << endl;
        cout << " Action Ambulance dispatched  " << endl;
    }
};
class cough : public Hospital
{
    public:
    cough( string name ) : Hospital(name) {}

    void registerCase() override
    {
        cout << "coughing for " << complainantName << "." << endl;
        cout << "Action Local patrol units alerted and investigation initiated." << endl;
    }
};

int main()
{
    Hospital *case1 = new headace("Ravi");
    Hospital *case2 = new fever("Sita");
    Hospital *case3 = new cough("Karan");

    cout << "=== OPD Registeration ===" << endl;
    case1->registerCase();
    cout << endl;
    case2->registerCase();
    cout << endl;
    case3->registerCase();

    delete case1;
    delete case2;
    delete case3;

    return 0;
}
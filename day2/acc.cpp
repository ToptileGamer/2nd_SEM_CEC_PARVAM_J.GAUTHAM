#include <iostream>
using namespace std;

class employee {
    public :
        int empId = 101;
        string empName;
    private:
        int salary;
    public:
    void setBalance(int b) {
        salary   = b;   
    }
    int getBalance() {
        return salary;;
    }
};
int main() {
    employee sal;
    sal.setBalance(25000);

    cout << "Employee ID: " << sal.empId << endl;
    cout << "Account balance: " << sal.getBalance() << endl;
    return 0;    

}
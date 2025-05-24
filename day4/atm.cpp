#include<iostream>
using namespace std;

class atm {
private:
    int pin;
    int balance;
public:
    void setdata(int p, int b) {
        pin = p;
        balance = b;
    }
    void displaydata() {
        cout << "Pin  : " << pin << "  Balance  : " << balance << endl;
    }
    void deposit(int amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }
    void withdraw(int amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }
    void verify_pin(int entered_pin) {
        if (entered_pin == pin) {
            cout << "Pin verified!" << endl;
        } else {
            cout << "Incorrect pin!" << endl;
        }
    }
};
int main() {
    atm a1;
    a1.setdata(123454, 10000);
    a1.displaydata();
    a1.deposit(5000);
    a1.withdraw(2000);
    a1.withdraw(15000); // Attempt to withdraw more than balance
    a1.displaydata();
    return 0;
}
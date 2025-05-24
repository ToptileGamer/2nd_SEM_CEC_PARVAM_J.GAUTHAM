#include <iostream>
using namespace std;

class atm {
private:
    int pin1;
    int pin2;
    int balance;

    bool verify_pin(int entered_pin) {
        return entered_pin == pin1;
    }
public:
    void withdrawchash(int entered_pin, int amount) {
        if (verify_pin(entered_pin)) {
            if (amount > balance) {
                cout << "Insufficient balance!" << endl;
            } else {
                balance -= amount;
                cout << "Withdrawn: " << amount << endl;
            }
        } else {
            cout << "Incorrect pin!" << endl;
        }
}
    void checkbalance(int entered_pin) {
        if (verify_pin(entered_pin)) {
            cout << "Current balance: " << balance << endl;
        } else {
            cout << "Incorrect pin!" << endl;
        }
    }
    void setdata(int p, int b) {
        pin1 = pin1;
        pin2 = pin2;
        balance = b;
    }


};

int main() {
    atm a1;
    atm a2;
    a1.setdata(123454, 10000);
    a2.setdata(23455, 20000);
    a1.withdrawchash(123454, 2000);
    a1.checkbalance(123454);
    a1.withdrawchash(123454, 15000); // Attempt to withdraw more than balance
    a1.checkbalance(123454);\
    a1.withdrawchash(123455, 2000); // Incorrect pin
    a2.withdrawchash(564521,36666666666);
    return 0;
}

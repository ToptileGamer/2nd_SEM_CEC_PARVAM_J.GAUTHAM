#include<iostream>
using namespace std;

class student
{
private:
    int rollno;

public:

    void setrollnumber(int r) {
        rollno = r;
    }
    int getrollnumber() {
        return rollno;
    }
};
int main() {
    student s1;
    s1.setrollnumber(101);
    cout << "Roll number: " << s1.getrollnumber() << endl;
    return 0;
}

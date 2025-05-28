#include<iostream>
using namespace std;

int main()
{
    int n;
    int s = 3; // Assuming s is the number of shifts
    cout << "Welcome to Employee Shift Management System" << endl;
    cout << "---------------------------------------------" << endl;
    cout << "Enter number of employee: ";
    cin >> n;



    string *employees = new string[n]; 
    string *shifts= new string[s];

    for(int i = 0; i < n; i++)
    {
        cout << "Enter employee name " << (i + 1) << ": ";
        cin >> employees[i];
    }

    cout << "Employee names are: " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << (i +1) << "." << employees[i] << endl;
    }

    cout << "Enter shift names: " << endl;
    for(int j = 0; j < s; j++)
    {
        cout << "Enter shift name " << (j + 1) << ": ";
        cin >> shifts[j];
    }

    delete[] employees; 
    return 0;
}
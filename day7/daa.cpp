#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of employee: ";
    cin >> n;

    string *employees = new string[n]; 

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

    delete[] employees; 
    return 0;
}
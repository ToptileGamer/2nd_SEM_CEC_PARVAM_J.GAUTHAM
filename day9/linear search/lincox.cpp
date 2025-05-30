#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    string *names = new string[n];
    cout << "Enter the name of the students: ";
    for(int i = 0; i< n; i++)
    {
        cout << i + 1 << ". ";
        cin >> names[i];
    }
    char choice;
    do
    {
    string key;
    cout << "Enter the name of the student you want to search: ";
    cin >> key;

    bool found = false;
    for(int i = 0; i < n; i++)
    {
        if(names[i] == key)
        {
            cout << "student " << key << "  found at position:  " << i + 1 << endl;
            found = true;
            continue;
            
        }
}
    if (!found)
    {
    cout << " student " << key << " not found in the list" << endl;
    found = false;    
    }
    
    cout << "Do you want to search again(y/n) : ";
    cin >> choice;
    }
    while(choice == 'y' || choice == 'Y');
delete[] names;
return 0;
}
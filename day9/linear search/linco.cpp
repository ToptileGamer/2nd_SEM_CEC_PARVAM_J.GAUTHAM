#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    int *names = new int[n];
    cout << "Enter the roll no of the students: ";
    for(int i = 0; i< n; i++)
    {
        cout << i + 1 << ". ";
        cin >> names[i];
    }

    int key;
    cout << "Enter the roll no of the student you want to search: ";
    cin >> key;

    bool found = false;
    for(int i = 0; i < n; i++)
    {
        if(names[i] == key)
        {
            cout << "student " << key << "  found at position:  " << i + 1 << endl;
            found = true;
            break;
        }
}
if (!found)
{
    cout << " student " << key << " not found in the list" << endl;
}
delete[] names;
return 0;
}
#include<iostream>
using namespace std;

int main ()
{
    int arr[] = {4,2,7,1,9};
    int key = 7;
    int size = sizeof(arr)/sizeof(arr[0]);
    bool found = false;

    for(int i = 0; i < size; i++)
    {
        cout << "elements " << key << "found at index" << i << endl;
        found = true;
        break;
    }

if(!found)
{
    cout << "element " << key << "not found " << endl;
}
}
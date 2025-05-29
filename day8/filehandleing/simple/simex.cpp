#include<iostream>

using namespace std;

int main()
{
    try
    {
        int age = 15;
        if(age < 18)
        {
            throw age;

        }
        else{
            cout << "acess granted";
        }
    }
    catch(int myNum)
    {
        cout << "access denied because you are " << myNum;
    }
    return 0;
    
}
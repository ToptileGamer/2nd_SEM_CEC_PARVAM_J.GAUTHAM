#include<iostream>
using namespace std;

class sample
{
    int*data;
    public:
    sample()
    {
        data=new int;
        cout<<"constructor : Memory allocated"<<endl;
}
~sample()
{
    delete data;
    cout<<"Destructor : Memory deallocated"<<endl;
}
};
int main()
{
    sample s1;
    return 0;
}
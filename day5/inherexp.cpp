#include<iostream>
using namespace std;

class user {
public:
    string name;
    string email;
    string items = "items";
    string accessing;
    string list_sent;
    string sales;
    string list_recived;
    string slname;

    void login() {
        cout << name << "  has logined in with " << email << endl;
    }
    
};
class customer : public user {
public:
    void setdata(string n, string e) {
        name = n;
        email = e;
        cout << "Customer : " << name << " has purcased" << items << endl;
    }
};
class admin : public user {
public:
    void setadmin(string a, string s){
        accessing = a;
        list_sent = s;
        cout << "admin has accessed the list of "<< name << " and sent the item list to " << sales ; 

    }
};
class sales : public user {
    public:
    void setsales(string c,string d){
        list_recived = c;
        string slname = "pavan ";
        cout << "the sales person "<< slname << " has recived the list " << accessing << " and sent the items to " << list_recived << endl;
    }
};
   
int main () {
    customer myCustomer;
    admin myadmin;
    sales mysales;
    myCustomer.setdata("Gautham", "abc123@gmail.com");
    myCustomer.login();
    myCustomer.items ;
    mysales.setsales("gautham", "apple mango orange");


    return 0;
   
}

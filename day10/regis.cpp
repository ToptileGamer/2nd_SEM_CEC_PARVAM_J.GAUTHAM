#include<iostream>
using namespace std;

class TET
{
public:
    string name;
    int age;
    string gender;
    string qualification;
    int BED_CGPA;
    int experience;
    int marks;

public:
    void setDetails(string name, int age, string gender, string qualification, int BED_CGPA, int experience, int marks)
    {
        name = name;
        age = age;
        qualification = qualification;
        BED_CGPA = BED_CGPA;
        experience = experience;
        marks = marks;
    }


    /*void displayDetails()
    {
        for (int i = 0; i < 25; i++)
        {
            cout << " name : " << name<< endl;
            cout << " age : " << age<< endl;
            cout << " gender : " << gender << endl;
            cout << " qualification : " << qualification << endl;
            cout << " B.ED CGPA  : " << BED_CGPA << endl;
            cout << " Experience in years : " << experience<< endl;
            cout << " 12th marks : " << marks<< endl;
        }
        

        /*cout << " name : " << name<< endl;
        cout << " age : " << name<< endl;
        cout << " gender : " << gender << endl;
        cout << " qualification : " << qualification << endl;
        cout << " B.ED CGPA  : " << BED_CGPA << endl;
        cout << " Experience in years : " << experience<< endl;
        cout << " 12th marks : " << marks<< endl;*/
    //}

    /*void getDetails()
    {
        const int n =25;
        string name[n]={};
        int age[n] ={};
        string gender[n] ={};
        string qualification[n]= {};
        int BED_CGPA[n]= {};
        int experience[n]= {};
        int marks[n]= {};

        for (int i = 0; i < n; i++)
        {
            cout <<i+1 <<". Name: ";
            cin>>name[i];
            cout <<"\tAge: ";
            cin>>age[i];
            cout <<"\tGender: ";
            cin>>gender[i];
            cout <<"\tQualification: ";
            cin>>qualification[i];
            cout <<"\t12th Percentage: ";
            cin>>marks[i];
            cout <<"\tB.Ed Marks: ";
            cin>>BED_CGPA[i];
            cout <<"\tExperience: ";
            cin>>experience[i];
            
        }




    }*/

    


};

void displayDetails()
    {
        const int n =25;
        string name[n]={};
        int age[n] ={};
        string gender[n] ={};
        string qualification[n]= {};
        int BED_CGPA[n]= {};
        int experience[n]= {};
        int marks[n]= {};

        
        for (int i = 0; i < 25; i++)
        {
            cout << " name : " << name<< endl;
            cout << " age : " << age<< endl;
            cout << " gender : " << gender << endl;
            cout << " qualification : " << qualification << endl;
            cout << " B.ED CGPA  : " << BED_CGPA << endl;
            cout << " Experience in years : " << experience<< endl;
            cout << " 12th marks : " << marks<< endl;
        }
    }

int main()
{
    const int n =25;
        string name[n]={};
        int age[n] ={};
        string gender[n] ={};
        string qualification[n]= {};
        int BED_CGPA[n]= {};
        int experience[n]= {};
        int marks[n]= {};

        for (int i = 0; i < n; i++)
        {
            cout <<i+1 <<". Name: ";
            cin>>name[i];
            cout <<"\tAge: ";
            cin>>age[i];
            cout <<"\tGender: ";
            cin>>gender[i];
            cout <<"\tQualification: ";
            cin>>qualification[i];
            cout <<"\t12th Percentage: ";
            cin>>marks[i];
            cout <<"\tB.Ed Marks: ";
            cin>>BED_CGPA[i];
            cout <<"\tExperience: ";
            cin>>experience[i];
            
        }

    for (int i = 0; i < 25; i++)
    {
        cout << " name : " << name[i]<< endl;
        cout << " age : " << age[i]<< endl;
        cout << " gender : " << gender[i] << endl;
        cout << " qualification : " << qualification[i] << endl;
        cout << " B.ED CGPA  : " << BED_CGPA[i] << endl;
        cout << " Experience in years : " << experience[i]<< endl;
        cout << " 12th marks : " << marks[i]<< endl;
        /* code */
    }
    
}
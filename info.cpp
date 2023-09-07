#include <iostream>
using namespace std;

struct student
{
    char name[50],emailid[50];
    int aadhar,mobile;
   
};



int main() 
{
    student s;
    int n;
    
    cout<<"\n Number of student to enter the information:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
    cout << "Enter information," << endl;
    
    cout << "Enter Name: ";
    cin >> s.name;
    cout << "Enter Aadhar Card number: ";
    cin >> s.aadhar;
    cout << "Enter Mobile Number : ";
    cin >> s.mobile;
    cout << "Enter Email ID: ";
    cin >> s.emailid;
    

    cout << "\n Displaying Information\n" << endl;
    cout << "\tName:\tAadhar number:\tMobile Number:\tEmail ID:" << s.name s.aadhar  s.mobile << endl;
    /*cout << "Aadhar number: " << s.aadhar  << endl;
    cout << "Mobile Number: " << s.mobile  << endl;
    cout << "Email ID: " << s.emailid << endl;*/
    }
    return 0;
}


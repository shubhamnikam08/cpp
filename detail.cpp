#include <iostream>
using namespace std;

struct student
{
    char name[50];
    int aadhar,mobile,emailid;
   
};

int main() 
{
    student s;
    cout << "Enter information," << endl;
    cout << "Enter Name: ";
    cin >> s.name;
    cout << "Enter Aadhar Card number: ";
    cin >> s.aadhar;
    cout << "Enter Mobile Number : ";
    cin >> s.mobile;
    cout << "Enter Email ID: ";
    cin >> s.emailid;

    cout << "\nDisplaying Information," << endl;
    cout << "Name: " << s.name << endl;
    cout << "Aadhar number: " << s.aadhar  << endl;
    cout << "Mobile Number: " << s.mobile  << endl;
    cout << "Email ID: " << s.emailid << endl;
    return 0;
}


#include<iostream>
using namespace std;
int main()
{
 int cn,ds,dsm,at,am,total;
 float percentage;
 char name;

 cout<<"Enter CN marks:\t";
 cin >> cn ;
 cout<<"Enter DS marks:\t";
 cin>>ds;
 cout<<"Enter DSM marks:\t";
 cin>>dsm;
 cout<<"Enter AT marks:\t";
 cin>>at;
 cout<<"Enter AM marks:\t";
 cin>>am;

 total=cn+ds+dsm+at+am;
 percentage=total/500*100;

 cout<<"1.\tCN\t"<< cn <<endl;
 cout<<"2.\tDS\t"<< ds <<endl;
 cout<<"3.\tDSM\t"<< dsm <<endl;
 cout<<"4.\tAT\t"<< at <<endl;
 cout<<"5.\tAM\t"<< am <<endl;
 cout<<"\tTotal\t"<< total <<endl;
 cout<<"\tPercentage\t"<< percentage <<endl;

 if(percentage<40)
   cout<<"Fail"<<endl;
  else
   cout<<"Pass"<<endl;

 return 0;
}

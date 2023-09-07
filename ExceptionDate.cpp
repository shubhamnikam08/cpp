#include<iostream>
using namespace std;

class Date
{
  private:
          int day;
          int month;
          int year;
  public:
          Date();
          void setDate(int day, int month, int year);
};

Date::Date()
{
    day=0;
    month=0;
    year=0;
}

void Date::setDate(int day, int month, int year)
{
     try
     {
         if(day>31 || day<0 || month>12 || month<0)
         {
              throw day;
         }
         else
         {
             cout<<day<<"-"<<month<<"-"<<year<<endl;
         }
     }
     catch(int day)
     { 
        cout<<"Date is not valid."<<endl;
     }
}

int main()
{
  int day,month,year;
  Date d1;
  cout<<"\nEnter the date:";
  cin>>day;
  cout<<"\nEnter the month:";
  cin>>month;
  cout<<"\nEnter the year:";
  cin>>year;
  d1.setDate(day,month,year);
  return 0;
}

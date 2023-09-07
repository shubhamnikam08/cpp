#include<iostream>
using namespace std;

class date
{
    private :
            int day,month,year;
    public :
            date()
            {
              day=0;
              month=0;
              year=0;
            }
            date(int day,int month, int year)
            {
              day=day;
              month=month;
              year=year;
            }
            void setdate();
            void getdate();
            void incredate(int day,int month,int year);
};

void date::setdate()
{
   cout<<"\nEnter Day   : ";
   cin>>day;
   cout<<"\nEnter Month : ";
   cin>>month;
   cout<<"\nEnter Year  : ";
   cin>>year;
}
void date::getdate()
{
   cout<<"\nDay  : "<<day;
   cout<<"\nMonth: "<<month;
   cout<<"\nYear : "<<year;
}
void date::incredate(int day,int month,int year)
{
   if(day>=1 && day<=31 && month<=12 && month>=1)
   {
   if((month==1 || month==3 || month==5 || month==7 || month==8 || month==10) && day==31)
   {
     day=1;
     month++;
   }
   else if((month==4 || month==6 || month==9 || month==11) && day==30)
   {
     day=1;
     month++;
   }
   else if((year%4==0 && year%400==0) && month==2)
   {
     day++;
   }
   else if((year%4==0 && year%400==0) && month==2 && day==29)
   {
     day=1;
     month++;
   }
   else if(month==12 && day==31)
   {
     day=1;
     month=1;
     year++;
   }
   else
   {
     day++;
   }
   cout<<"\nDay   : "<<day;
   cout<<"\nMonth : "<<month;
   cout<<"\nYear  : "<<year;
   }
   else
   {
     cout<<"\nInvalid Date";
   }
   
}
int main()
{
  date obj;
  int day,month,year;
  cout<<"\nEnter day:";
  cin>>day;
  cout<<"\nEnter month:";
  cin>>month;
  cout<<"\nEnter year:";
  cin>>year;
  obj.incredate(day,month,year);
}
   

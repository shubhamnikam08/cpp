#include<iostream>
using namespace std;

 
 int area(int lt,int wt)
 {
   int area;
  area=lt*wt;
  return area;
 }
 
 int area(int sd)
 {
  int area;
  area=sd*sd;
  return area;
 }
 
 int area(float bs, float ht)
 {
   float area;
  area=(1/2)*bs*ht;
  return area;
 }
 
 int area(float rad)
 {
   float area;
  area=3.142*rad*rad;
  return area;
 }
 

int main()
{
 int ch,lt,wt,ar,sd,as;
 float ht,bs,at,rad,ac;
 
 cout<<"Calculate the area of:";
 cout<<"\n1.Rectangle\n2.Square\n3.Triangle\n4.Circle";
 cout<<"\nEnter your choice:";
 cin>>ch;
 switch(ch)
    {
      case 1:
          cout<<"\nEnter the length of rectangle:";
          cin>>lt;
          cout<<"\nEnter the Breadth of rectangle:";
          cin>>wt;
          ar=area(lt,wt);
          cout<<"\nThe area of rectangle is:";
          cout<<ar;
      case 2:
          cout<<"\nEnter the side of square:";
          cin>>sd;
          as=area(sd);
          cout<<"\nThe area of square is:";
          cout<<as;
      case 3:
          cout<<"\nEnter the base of triangle:";
          cin>>bs;
          cout<<"\nEnter the height of triangle:";
          cin>>ht;
          at=area(bs,ht);
          cout<<"\nThe area of triangle is:";
          cout<<at;
      case 4:
          cout<<"\nEnter the rad of circle:";
          cin>>rad;
          ac=area(rad);
          cout<<"\nThe area of circle is:";
          cout<<ac; 
      default:
          cout<<"\nInvalid..!";
      }    
          
 return 0;
}


  
  

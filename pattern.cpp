#include<iostream>
using namespace std;
int main()
{
  int r,c,number=1,n;
  cout<<"\n Enter the number of n:=";
  cin>>n;
  for(r=0;r<=n;r++)
  {
    for(c=0;c<r;c++)
    {
      cout<<number<< " ";
      number++;
    }
    cout<<"\n";
   }
 return 0;
}

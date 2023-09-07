#include <iostream>
#include<stdlib.h>
using namespace std;

class PRODUCT
{
   protected:
            int id;
            char name[20];
            int stock;
            float gst;
            float discount;
            float price;
      
   public:
            PRODUCT();
            void viewProd();
            int checkStock();
};     

class purchased_Prod : public PRODUCT
{
   protected:
            int quantity;
      
   public:
            purchased_Prod();
            float calculateGst();
            float calculateDiscount();
            float calculatePrice();
};

int main()
{
  cout<<"Enter Product ID:";
  cin>>prod_id;
  cout<<"/nEnter Product Name:";
  cin>>prod_name;
  cout<<"/nEnter Product Price:";
  cin>>prod_price;
  cout<<"/nEnter Quantity:";
  cin>>quantity;
  

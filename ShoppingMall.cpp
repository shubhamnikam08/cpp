 #include<iostream>
 #include<stdlib.h>
 using namespace std;
 class shoppingmall
 {
   
   private:
          char ProductName[20];
          int ProductID;
          float gst,discount,ProductPrice,TotalAmt;
   public:
          void setproduct();
          {
              cout<<"\nEnter the Product Name: ";
              cin>>ProductName;
              cout<<"\nEnter the Product ID: ";
              cin>>ProductID;
  		    cout<<"\nEnter the Product Price: ";
  		    cin>>ProductPrice;
  		    cout<<"\nEnter the discount in %: ";
   		    cin>>discount;
   		    cout<<"\nEnter the GST in %: ";
  		    cin>>gst;
   
   		    gst=gst*ProductPrice/100;
  		    discount=discount*ProductPrice/100;
  		    TotalAmt=ProductPrice+gst-discount;
 		}
          void displayproduct();
          {
             cout<<"\nProduct Name  : "<<ProductName;
             cout<<"\nProduct ID    : "<<ProductID;
             cout<<"\nProduct Price : "<<ProductPrice;
             cout<<"\nDiscount      : "<<discount; 
             cout<<"\nGST           : "<<gst;
             cout<<"\nTotal Price   : "<<TotalAmt;
          }
 };
 
 /*void shoppingmall::setproduct()
 {
   cout<<"\nEnter the Product Name: ";
   cin>>ProductName;
   cout<<"\nEnter the Product ID: ";
   cin>>ProductID;
   cout<<"\nEnter the Product Price: ";
   cin>>ProductPrice;
   cout<<"\nEnter the discount in %: ";
   cin>>discount;
   cout<<"\nEnter the GST in %: ";
   cin>>gst;
   
   gst=gst*ProductPrice/100;
   discount=discount*ProductPrice/100;
   TotalAmt=ProductPrice+gst-discount;
 }*/
 
 /*void shoppingmall::displayproduct()
 {
   cout<<"\nProduct Name  : "<<ProductName;
   cout<<"\nProduct ID    : "<<ProductID;
   cout<<"\nProduct Price : "<<ProductPrice;
   cout<<"\nDiscount      : "<<discount; 
   cout<<"\nGST           : "<<gst;
   cout<<"\nTotal Price   : "<<TotalAmt;
 }*/
 
 int main()
 {
   shoppingmall a;
   int choice;
   while(choice<4)
   {
     cout<<"\n1. Add Product";
     cout<<"\n2. Delete Product";
     cout<<"\n3. Display Product";
     cout<<"\n4. Exit"; 
     cout<<"\nEnter your choice: ";
     cin>>choice;
     switch(choice)
     {
       case 1:
              a.setproduct();
              break;
       case 2:
       case 3:
              a.displayproduct();
              break;
       case 4:
              cout<<"\nExiting...";
              break;
       default:
              cout<<"Enter valid choice!";
              break;
     }
    }
     return 0;
        
   /*a.setproduct();
   a.displayproduct();*/
 }

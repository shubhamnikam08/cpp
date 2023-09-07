#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#define SIZE 5
using namespace std;

class queue
{
  private:
          int queue_arr[SIZE];
          int num,i,front,rear;
  public:
         void Queue()
         {
           front=0;
           rear=0;
         }
         void enqueue()
         {
            if(rear==SIZE)
               cout<<"Queue is full."<<endl;
               
            else
               cout<<"Enter the value to be inserted:";
               cin>>num;
               cout<<num<<" inserted successfully."<<endl;           
               queue_arr[rear++]=num;
         }
         void dequeue()
         {
            if(front==rear==-1)
               cout<<"Queue is Empty."<<endl;
               
            else
               {
                 rear--;
                 cout<<queue_arr[rear]<<" popped Successfully."<<endl;
               }
         }
         void display()
         {
                cout<<"Queue size:"<<rear;
                for(i=(rear-1);i>=0;i--)
                    cout<<"\nValue"<<i+1<<":"<<queue_arr[i]<<endl;
         }
          
          void exit()
          {
            cout<<"Exiting..."<<endl;
          }
          
};

int main()
{
  queue q1;
  int ch;
  
  do
  {
    cout<<"Queue Menu:"<<endl;
    cout<<"1.Enqueue\n2.Dequeue\n3.Display\n4.Exit"<<endl;
    cout<<"Enter your choice:";
    cin>>ch;
    
    switch(ch)
    {
      case 1:
             q1.enqueue();
             break;
      case 2:
      	   q1.dequeue();
      	   break;
 	 case 3:
 	 	   q1.display();
 	 	   break;
 	 case 4:
 	        q1.exit();
 	        break;
 	 default:
 	        cout<<"Invalid Choice!"<<endl;
 	        break;
   }
   
  }
  while(ch!=4);
  return 0;
}

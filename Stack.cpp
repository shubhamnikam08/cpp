#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#define SIZE 5
using namespace std;

class stack
{
 private:
         int stack_arr[SIZE];
         int num,i,top;
 public:
         void Stack()
         {
           top=0;
         }
          
          void push()
          {
            if(top==SIZE)
               cout<<"Stack is full."<<endl;
               
            else
               cout<<"Enter the value to be pushed:";
               cin>>num;
               cout<<"Pushed value:"<<num<<endl;           
               stack_arr[top++]=num;
          }
          
          void pop()
          {
            if(top==-1)
               cout<<"Stack is Empty."<<endl;
               
            else
               {
                 top--;
                 cout<<stack_arr[top]<<" popped Successfully."<<endl;
               }
          }
          
          void display()
          {
                cout<<"Stack size:"<<top;
                for(i=(top-1);i>=0;i--)
                    cout<<"\nValue"<<i+1<<":"<<stack_arr[i]<<endl;
          }
          
          void exit()
          {
            cout<<"Exiting..."<<endl;
          }
          
};

int main()
{
  stack s1;
  int ch;
  
  do
  {
    cout<<"Stack Menu:"<<endl;
    cout<<"1.Push\n2.Pop\n3.Display\n4.Exit"<<endl;
    cout<<"Enter your choice:";
    cin>>ch;
    
    switch(ch)
    {
      case 1:
             s1.push();
             break;
      case 2:
      	   s1.pop();
      	   break;
 	 case 3:
 	 	   s1.display();
 	 	   break;
 	 case 4:
 	        s1.exit();
 	        break;
 	 default:
 	        cout<<"Invalid Choice!"<<endl;
 	        break;
   }
   
  }
  while(ch!=4);
  return 0;
}

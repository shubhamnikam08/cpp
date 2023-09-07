#include<iostream>
using namespace std;

class product
{
    public:
    int id;
    float price;
    char name[10];   
};

class prod
{
    product arr[5];
    int max,lp;
    int cur,next;

    public:
    prod()
    {
        max = 5;
        lp = -1;
    }
    void addProd(product p1,int pos)
    {
        pos--;
        lp++;
        if(pos <= (lp+1))
        {
            if(pos == lp+1)
            {
                arr[lp] = p1;
            }
            else
            {
                cur = lp-1;
                next = lp;
                while(next != pos)
                {
                    arr[next] =arr[cur];
                    cur--;
                    next--;
                }
                arr[next] = p1;
            }
        }
        else if(lp == max)
        {
            cout<< "list is full"<<endl;
            lp--;
        }
        else
        {
            cout<< "Invalid Input"<<endl;
            lp--;
        }
    }
    void delProd(int pos)
    {
        pos--;
        if(pos < 0 || pos >lp)
        {
            cout<< "Invalid Input"<<endl;
        }
         else
       {

            if(pos <= lp)
            {
                cur = pos;
                next = pos+1;
                while(cur != lp)
                {
                    arr[cur] = arr[next];
                    cur++;
                    next++;
                }
                lp--;
            }
        }

    }
    
    void display()
    {
        int i=0;
        if(lp<0)
        {
            cout<< "List is empty"<<endl;
        }
        else
        {
            cout <<"ID\t"<<"NAME\t"<<"PRICE"<<endl;
             while(i<=lp)
             {
                cout << arr[i].id<<"\t"<<arr[i].name<<"\t"<< arr[i].price<<endl;
                i++;
             }
        }       
    }
};

int main()
{
    prod p;
    product p1;
    int choice,pos;
    do
    {
        cout<<"Enter your choice:\n1)Add product\n2)Delete product\n3)Display\n0)Exit\n";
        cin>> choice;
        if(choice == 1)
        {
            cout << "Enter your Position:\n";
            cin>> pos;
            cout << "Enter ID:\n";
            cin>> p1.id;
            cout << "Enter NAME:\n";
            cin >> p1.name;
            cout << "Enter PRICE:\n";
            cin >> p1.price;
            p.addProd(p1,pos);
        }
        if(choice == 2)
        {
            cout << "Enter Position:\n";
            cin>> pos;
            p.delProd( pos);
        }
        if(choice == 3)
        {
            p.display();
        }
    } while (choice > 0 && choice < 4);
}

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class queue;
{
    int queue1[5];
    int rear,front;
    public:
    queue()
    {
        rear=-1;
        front=-1;
    }
    void insert(int x)
    {
        if(rear>4)
        {
            cout<<"queue over flow";
            front=rear=-1;
            return;
        }
        queue1[++rear]=x;
        cout<<"inserted"<<x;
    }
    coid delet()
    {
        if(front==rear)
        {
            cout<<"queue under flow";
            return;
        }
        cout<<"deleted"<<queue1[++front];
    }
    void display()
    {
        if(rear==front)
        {
            cout<<"queue empty";
            return;
        }
        for(int i=front+1;i<=rear;i++)
        cout<<queue1[i]<<" ";
    }
};

main()
{
    int ch;
    queue qu;
    while(1)
    {
        cout<<"\n1.insert 2.delet 3.display 4.exit\nEnter your choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
            cout<<"Enter the element: ";
            cin>>ch;
            qu.insert(ch);
            break;
            case 2:
            qu.delet();
            break;
            case 3:
            qu.display();
            break;
            case 4:
            exit(0);
        }
    }
    return(0);
}
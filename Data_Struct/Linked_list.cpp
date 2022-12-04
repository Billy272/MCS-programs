#include<iostream>
#include<process.h>
#include<conio.h>
#include<malloc.h>
using namespace std;

struct node
{
    int data;
    node*next;
}*start;
typedefstruct node node;
node*head=NULL;
void dislay();
void insertend();
void insertbeg();
void delend();
void insertmid();
void delmid();
void modify();
int main()
{
    int a;
    cout<<("THIS PROGRAM WILL GIVE YOU THE SINGLE LINK LIST\n");
    do
    {
        cout<<("Enter your choice\n");
        cout<<("1.INSERT element at the END of linklist\n");
        cout<<("2.INSERT element at the BEGINING of linklist\n3.DELETE from END\n");
        cout<<("4.DELETE from BEGINING\n5.INSERT at MIDDLE\n");
        cout<<("6.DELETE from MIDDLE\n7.MODIFY any elemnt\n8.DISPLAY\n9.EXIT\n")
        cin>>a;
        switch(a)
        {
            case 1:
            insertend();
            break;
            case 2:
            insertbeg();
            break;
            case 3;
            delend();
            break;
            case 4:
            delbeg();
            case 5:
            insertmid();
            break;
            case 6:
            delmid();
            break;
            case 7:
            modify();
            break;
            case 8:
            display();
            break;
            case 9:
            exit(0);
            return 0;
        }
    }
    while(a!=8);
    getch();
}

void insertend()
{
    node*p,*q;
    int item;
    cout<<("Enter your elements in the stack: \n");
    cin>>item;
    p=(node*)malloc(sizeof(node));
    p->data=item;
    p->next=NULL;
    if(start==NULL)
    {
        start=p;
    }
    else
    {
        q=start;
        while(q->next!=NULL)
        {
            q=q->next=p;
        }
    }
    void display()
    {
        node*temp;
        temp=start;
        cout<<("THE LINKLIST IS AS FOLLOWS: ");
        while(temp->next!=NULL)
        {
            cout<<("%d->",tem->data);
            temp=temp->next;
        }
        cout<<("%d->\n",temp->data);
    }
    void delend()
    {
        node *q,*p,*k;
        q=start;
        if(start->data==0)
        {
            cout<<("THERE IS NO ELEMENT IN THE LIST\n");
        }
        else if(start->next==NULL)
        {
            k=start;
            start=NULL;
            free(k);
        }
        else
        {
            while(q->next->next!=NULL)
            {
                q=q->next;
            }
            p=q->next->next;
            q->next=NULL;
            free(p);
        }
    }
    void insertbeg()
    {
        int item;
        node *p,*q;
        cout<<("Enter the value which you want to insert at the begining: \n");
        cin>>item;
        p=start;
        q=(node*)malloc(sizeof(node));
        q->data=item;
        q->next=p;
        start=q;
    }
    
    void delbeg()
    {
        if(start=NULL)
        {
            cout<<("THERE IS NO ELEMENT IN THE LIST\n");
        }
        node*p;
        p=start;
        start=p->next;
        free(p);
    }
    
    void insertmid()
    {
        int item1,item2;
        node *p,*q,*k;
        cout<<("Enter the previous value then insert a new element: \n");
        cin>>item1;
        cout<<("Enter the value of new node: \n");
        cin>>item2;
        q=(node*)malloc(sizeof(node));
        q->data=item2;
        q->next=NULL;
        p=start;
        while(p->data!=item1)
        {
            p=p->next;
        }
        k=p->next;
        p->next=q;
        q->next=k;
    }
    
    void delmid()
    {
        int item;
        node *p,*q,*k;
        cout<<("Enter the previous value of the value you want to delete: \n");
        cin>>item;
        p=start;
        while(p->data!=item)
        {
            p=p->next;
        }
        q=p->next->next;
        k=p->next;
        p->next=q;
        free(k);
    }
    
    void modify()
    {
        int item1,item2;
        node *p,*q;
        cout<<("Enter the value you want to modify: \n");
        cin>>item1;
        cout<<("Enter the new value: \n");
        cin>>item2;
        p=start;
        while(p->data!=item1)
        {
            p=p->next;
        }
        p->data=item2;
    }

    #include<iostream>
    #include<conio.h>
    #include<stdlib.h>
    using namespace std;
    class stack
    {
        int stk[5];
        int top;
        public;
         stack()
         {
            top=-1;
         }
         void push(int x)
         {
            if(top>4)
            {
                cout<<"Stack over flow";
                return;
            }
            stk[++top]=x;
            cout<<"inserted"<<x;
         }
         void pop()
         {
            if(top<0)
            {
                cout<<"stack under flow";
                return;
            }
            cout<<"deleted"<<stk[top-];
         }
         void display()
         {
            if(top<0)
            {
                cout<<"stack empty";
                return;
            }
            for(int i=top;i>=0;i--)
            cout<<stk[i]<<" ";
         }
    };

    int main()
    {
        intch;
        stackst;
        while(1)
        {
            cout<<"\n1.push 2.pop 3.display 4.exit\nEnter your choice: ";
            cin>>ch;
            switch(ch)
            {
                case 1:
                cout<<"Enter the element: ";
                cin>>ch;
                st.push(ch);
                break;

                case 2:
                st.pop();
                break;

                case 3:
                st.display();
                break;

                case 4:
                exit(0);

            }
        }
        return(0);
    }

    #include<iostream>
    #include<conio.h>
    #include<stdlib.h>
    using namespace std;

    class queue
    {
        int queue1[5];
        int rear,front;
        public:
        queue()
        {
            rear=-1;
            front=-1
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
        voiddelet()
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
        intch;
        queuequ;
        while(1)
        {
            cout<<"\n1.insert 2.delete 3.display 4.exit\nEnter your choice: ";
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
}

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
voidinsertend();
voidinsertbeg();
voiddelend();
voidinsertmid();
voiddelmid();
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
    }
}

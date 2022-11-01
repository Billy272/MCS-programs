#include<iostream>
#include<stdlib.h>
using namespace std;
class customer;
{
    private:
    string customer_name();
    int account_num();
    double balance;
    public:
    void read_data();
    void deposit();
    void withdraw();
    double checkbalance();
    void display();
}
//implementation
void customer::read_data();
{
    cout<<"Enter name: "<<endl;
    cin>>customer_name;
    cout<<"Enter Account number: "<<endl;
    cin>>account_num;
    cout<<"Enter balance: "<<endl;
    cin>>balance;
}
void customer::deposit()
{
    double amount;
    cout<<"Amount to deposit: ";
    cin>>amount;
    balance+=amount;
    cout<<"New balance: "<<balance;
}

void customer::withdraw()
{
    double amount;
    cout<<"Amount to withdraw: ";
    cin>>amount;
    balance-=amount;
    cout<<"New balance: "<<balance;
}

double customer::checkbalance()
{
    return balance;
}
void customer::display()
{
    cout<<"Name: "<<customer_name;
    cout<<"Account Number: "<<account_num;
    cout<<"Account balance: "<<balance;
}
int main()
{
    customer c;
    int x;
    c.read_data();
    c.display();
    cout<<"Press 1 to Deposit"<<endl;
    cout<<"Press 2 to Withdraw"<<endl;
    cout<<"Press 3 to Check balance"<<endl;
    cin>>x;

    if(x==1)
        c.deposit();
    else if(x==2)
        c.widthdraw();
    else(x==3)
        c.checkbalance();
    return 0;

}

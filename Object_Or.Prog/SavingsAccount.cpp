#include<iostream>
using namespace std;

class savingsAccount
{
    private:
        string last_name,first_name,zipcode;
        double acc_num, bal, rate;
    public:
        ~savingsAccount(){}
        savingsAccount(string l,string f,string z);
        savingsAccount(string,string,string,double);
        void display();
        void deposit(double);
        void withdraw(double);

}

savingsAccount::savingsAccount(string l,string f,string z, double acc)
{
    last_name= l;
    first_name = f;
    zipcode= z;
    accNumber=acc;
    bal=100;
    rate=0.03;
}

void savingsAccount::display()
{
    cout<<".....CUSTOMER DETAILS.....\n";
    cout<<"Last name: \n"<<last_name;
    cout<<"First name: \n"<<first_name;
    cout<<"Zip code: \n"<<zipcode;
    cout<<"Account Number: \n"<<accNumber;
    cout<<"Balance: \n"<<bal;
    cout<<"Interest rate: "<<rate;
}

void savingsAccount::deposit(double amt)
{
    bal+=amt;
}

void savingsAccount::witdraw(double amt)
{
    bal+=amt;
}



int main()
{
    string l, f, z;
    int x;
    double amt;
    cout<<"Enter customer details: ";
    cin>>l>>f>>z;
    savingsAccount acc1(l,f,z);
    cout<<"Current acc details: ";
    acc1.display();
    cout<<"\nPress 1 to deposit;2 to widthdraw;Any key to check balance";
    cin>>x;
    if(x==1)
    {
        cout<<"Enter the amount to deposit: ";
        cin>>amt;
        acc1.deposit(amt);
    }
    else
    {
        cout<<"\nEnter amount to widthdraw: ";
        cin>>amt;
        acc1.witdraw(amt);
    }
    else
    {
        cout<<"\nCurrent acc details";
        acc1.display;
    }
    cout<<"\nDo you want to perform a new transaction y/n";
    cin>>ans;
    while(ans=='y');




    /*savingsAccount acc2("John", "Doe", "MMU", 1000);
    acc1.display();
    cout<<end1;
    acc2.display();
    acc1.deposit(2000);
    acc1.withdraw(1000);
    acc1.display();*/
    return 0;
}

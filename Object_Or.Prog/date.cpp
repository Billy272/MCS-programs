#include<iostream>
#include<math.h>
using namespace std;

class Date
{
    private:
        int month;
        int day;
        int year;
    public:
        Date();
        void set_month();
        void set_date();
        void set_year();
        void display();

}
Date::Date()
{
    month=1;
    date=1;
    year=2000;
}

void Date::set_month()
{
    cout<<"Enter month: ";
    cin>>month;
}
void Date::set_date()
{
    cout<<"Enter date: ";
    cin>>date;
}
void Date::set_year()
{
    cout<<"Enter year: ";
    cin>>year;
}
void Date::display()
{
    cout<<"The date is "<<month<<"/"<<date<<"/"<<year<<endl;
}
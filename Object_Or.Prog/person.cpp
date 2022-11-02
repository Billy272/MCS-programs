#include<iostream>
using namespace std;

class person
{
    private:
        string first_name, last_name, zipcode;
    public:
        int person;
        person();
        person(string,string,string);
        void display();

}
person::person()
{
    first_name="x";
    last_name="x";
    zipcode="x";
}
person::person(string,string,string)
{
    first_name=f;
    last_name=l;
    zipcode=z;
}
void person::display()
{
    cout<<"Person Details\n";
    cout<<"First name: \n"<<first_name;
    cout<<"Last name: \n"<<last_name;
    cout<<"Zipcode: "<<zipcode;
}
int main()
{
    person A, B("John","Doe","MMS");
    A.display();
    B.display();
    return 0;
}
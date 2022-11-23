#include<iostream>
using namespace std;

class rectangle
{
    protected:
        double length,width;
    public:
        void set_values(double,double);
        void display();
};
class block: public rectangle
{
    private:
        double height;
    public:
        void set_height(double);
        void display_H();

};
void rectangle::set_values(double l, double w)
{
    length = l;
    width = w;
}
void rectangle::display()
{
    cout<<"Length: "<<length<<endl;
    cout<<"width: "<<width<<endl;
}
void block::set_height(double h)
{
    height = h;
}
void block::display_H()
{
    cout<<"height: "<<height<<endl;
}

int main()
{
    rectangle r;
    r.set_values(23,6);
    r.display();
    block b;
    b.set_values(20, 5)
    b.set_height(4);
    b.display();
    b.display_H();
    return 0;
}
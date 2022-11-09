#include<iostream>
#include<math.h>
using namespace std;

class rectangle
{
    double width, height;
    public:
    rectangle();
    void get_rectangle();
    int get_area();
    int get_perimeter();
}

rectangle::rectangle()
{
    width=0;
    height=0;
}

void rectangle::get_rectangle()
{
    cout<<"Enter rectangle width and height: "<<endl;
    cin>>width>>height;
}

int rectangle::get_area()
{
    area=width*height;
    cout<<"The area is: "<<area<<endl;
    return area;
}

int rectangle::get_perimeter()
{
    perimeter=2(width+height);
    cout<<"The perimeter is: "<<perimeter<<endl;
    return perimeter;
}
#include<iostream>
#include<math.h>
using namespace std;

class Rectangle
{
    public:
    int width, height,area,perimeter;
    Rectangle();
    void get_rectangle();
    int get_area();
    int get_perimeter();
};

Rectangle::Rectangle()
{
    width=0;
    height=0;
}


void Rectangle::get_rectangle()
{
    cout<<"Enter rectangle width and height: "<<endl;
    cin>>width>>height;
}

int Rectangle::get_area()
{
    area=width*height;
    cout<<"The area is: "<<area<<endl;
    return area;
}

int Rectangle::get_perimeter()
{
    perimeter=(width+height)*2;
    cout<<"The perimeter is: "<<perimeter<<endl;
    return perimeter;
}
int main()
{
  Rectangle paraFirst();
  paraFirst().get_rectangle();
  return 0;
}
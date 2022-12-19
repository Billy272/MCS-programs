#include<iostream>
#include<math.h>
using namespace std;

<<<<<<< HEAD
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
=======
class Rectangle
{
    int width, height,area,perimeter;
    Rectangle();
    public:
    void get_rectangle();
    int get_area();
    int get_perimeter();
};

Rectangle::Rectangle()
>>>>>>> 6b27d9b2ce91405c347deca83122d6e757dc4472
{
    width=0;
    height=0;
}

<<<<<<< HEAD
void rectangle::get_rectangle()
=======

void Rectangle::get_rectangle()
>>>>>>> 6b27d9b2ce91405c347deca83122d6e757dc4472
{
    cout<<"Enter rectangle width and height: "<<endl;
    cin>>width>>height;
}

<<<<<<< HEAD
int rectangle::get_area()
=======
int Rectangle::get_area()
>>>>>>> 6b27d9b2ce91405c347deca83122d6e757dc4472
{
    area=width*height;
    cout<<"The area is: "<<area<<endl;
    return area;
}

<<<<<<< HEAD
int rectangle::get_perimeter()
{
    perimeter=2(width+height);
    cout<<"The perimeter is: "<<perimeter<<endl;
    return perimeter;
=======
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
>>>>>>> 6b27d9b2ce91405c347deca83122d6e757dc4472
}
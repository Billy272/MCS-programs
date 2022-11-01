#include<iostream>
#include <math.h>
using namespace std;


int main()
{
    char choice;
    double base, height, area, width, length, radius;
    const double pie=3.14159265;
    cout<<"Press t to calculate area of a triangle\n";
    cout<<"Press r to calculate area of a rectangle\n";
    cout<<"Press c to calculate area of a circle\n";
    cin>>choice;
    switch (choice)
    
    {
    case 'c';
    cout<<"Enter radius\n";
    cin>>radius;
    area = pie * radius * radius;
    break;
    case 't';
    cout<<"Enter base + height\n";
    cin>>base>>height;
    area=0.5* base* height;
    break;
    case 'r';
    cout<<"Enter width + height\n";
    cin>>width>>height;
    area=width*height;
    }
    cout<<"The area is:"<<area;
    return 0;

}
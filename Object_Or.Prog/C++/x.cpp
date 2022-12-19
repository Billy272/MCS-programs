#include<iostream>
using namespace std;
float calc_area(float l,float w)
{
 return(l*w);
}
{
    float calc_per(float l,float w)
}
int main()
{
    float length,width;
    cout<<"Enter the length and width\n";
    cin>>length>>width;
    cout<<"Area: "<< calc_area(length,width);
    cout<<"\n Perimeter: "<<calc_per(length,width)<<endl;
    return 0;
}
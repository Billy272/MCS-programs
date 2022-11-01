#include<iostream>
using namespace std;

int calculatePower(int x, int y)
int main()
{
    int base, power, result;
    cout<<"Enter base number: ";
    cin>>base;
    cout<<"Enter power number: ";
    cin>>power;
    result = calculatePower(base, power);
    cout<<base<<"^"<<power<<"="<<result;
    return 0;
}
int calculatePower(int base, int power)
{
    if(power != 0)
        return (base*calculatePower(base, power-1));
     else
     return 1;
}
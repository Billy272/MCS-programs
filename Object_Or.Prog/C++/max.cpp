#include<iostream>
using namespace std;
int max_two(int x, int y);
int main()
{
    int a, b;
    cout<<"Enter 2 values\n";
    cin>> a>>b;
    cout<<"Maximum Value: "<<max_two(a,b);
    return 0;
}
int max_two(int x, int y)
{
    if(x>y)
    return x;
    else
    return y;
}
#include<iostream>
#include<integer.h>
using namespace std;

class integer
{
    private: 
    int value;
    public:
    void read_num();
    int iseven;
}

void integer::read_num()
{
    cout<<"Enter an integer: \n";
    cin>>value;
}

int integer::iseven()
{
    if((value%2)==0)
        return 1;
    else
        return 0;
}

int main()
{
    integer i;
    i.read_num();
    cout<<"Is even? "<<i.iseven();
    return 0;
}
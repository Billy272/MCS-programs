#include <iostream>
using namespace std;

class pair_ab
{
    private:
    int x, y;
    public:
    pair_ab()
    {
        x=0;
        y=0;
    }
    ~pair_ab(){}
    int max_xy()
    {
        if (x>y)
        return x;
        else
        return y;
    }
};
int main()
{
    int a, b;
    cout<<"Enter 2 integers: "\n;
    cin>>a>>b;
    pair_ab xy(a,b);
    cout<<"The larger value is: "<<xy.max_xy();
    return 0;
}
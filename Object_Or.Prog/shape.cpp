#include<iostream>
using namespace std;

class shape
{
    public:
        void show()
            {
                cout<<"I am shape"<<endl;
            }
}
class circle: public shape
{
    public:
        void show()
            {
                cout<<"I am circle"<<endl;
            }
}
class square: public shape
{
    public:
        void show()
            {
                cout<<"I am square"<<endl;
            }
};
int main()
{
    shape s;
    circle c;
    square q;
    s.show();
    c.show();
    q.show();
    return 0;
}

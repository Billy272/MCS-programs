#include <iostream>
using namespace std;

class RealtorCommission
{
    private:
        double price, rate, commission;
    public:
        RealtorCommission(double,double)
        {
            rate = r;
            price=p;
            commission=price*rate;
        }
        RealtorCommission(int, int)
        {
            price=p;
            rate= r;    
            commission=(price*rate)/100;
        }
        void display()
        {
            cout<<price<<endl;
            cout<<rate<<endl;
            cout<<commission<<endl;
        };
};
int main()
{
    RealtorCommission x(2000.0,0.5),y(2000,50);
    x.display();
    cout<<endl;
    y.display();
    return 0;

}

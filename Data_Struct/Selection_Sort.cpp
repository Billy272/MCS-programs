#include<iostream>
#include<conio.h>
#define MAX 10
using namespace std;
class selsort
{
    int arr[MAX],n;
    public:
    void getdata();
    void showdata();
    void sortLogic();
};
void selsort::getdata()
{
    cout<<"How many elements do you require: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element in cell: "<<i;
        cin>>arr[i];
    }
}
void selsort::showdata()
{
    cout<<"\n--Sorted Elements--\n";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
void selsort::sortLogic()
{
    int temp,min;
    for(int i=0;i<n;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        temp = arr[min];
        arr[min]= arr[i];
        arr[i]=temp;
        cout<<"\narr[min]= "<<arr[min]<<"arr[i]= "<<arr[i];
    }
}

int main()
{
    //clrscr();
    cout<<"\n*****Selection Sort*****\n";
    selsort obj;
    obj.getdata();
    obj.sortLogic();
    obj.showdata();
}

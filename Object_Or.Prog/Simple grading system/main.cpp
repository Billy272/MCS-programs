#include<iostream>
#include "student.h"
using namespace std;
int main()
{
    string name,regnum;
    double s1, s2, s3;
    student std1, std2;
    cout<<"Enter name and registration number: ";
    cin>>name>>regnum;
    cout<<"\nEnter students marks: ";
    cin>>s1>>s2>>s3;

    std1.setvalues(name,regnum,s1,s2,s3);
    //std1
    calc_mean()
    cout<<"\nMean: "<<std1.calc_mean();
    cout<<"\nGrade: "<<std1.getgrade();

    //std2
    cout<<"Enter name and registration number: ";
    cin>>name>>regnum;
    cout>>"\nEnter student marks: ";
    cin>>s1>>s2>>s3;

    std2.setvalues(name regnum,s1,s2,s3);
    cout<<"\nMean: "<<std2.calc_mean;
    cout<<"\nGrade: "<<std2.getgrade();

    //std3
    cout<<"Enter name and registration number: ";
    cin>>name>>regnum;
    cout>>"\nEnter student marks: ";
    cin>>s1>>s2>>s3;

    std3.setvalues(name regnum,s1,s2,s3);
    cout<<"\nMean: "<<std3.calc_mean;
    cout<<"\nGrade: "<<std3.getgrade();

    return 0;
}
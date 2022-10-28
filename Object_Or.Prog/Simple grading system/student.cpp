#include<student.h>
#include<grading.h>
void student::setvalues(string n, string r1, double s1, double s2, double s3)
{
    name=n;
    regnum=r;
    sub1=s1;
    sub2=s2;
    sub3=s3;
}
double student::calc-mean()
{
    return((sub1+sub2+sub3)/3);
}
double student::get-grade()
{
    
}
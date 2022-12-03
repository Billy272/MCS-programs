#include<iostream>
#include<stdlib.h>
#include<student.h>
using namespace std;

class student
{
    private:
      string name;
      string regnum;
      double sub1, sub2, sub3;

    public:
      void setvalues(string, string, double, double, double);
      double calc-mean();
      char get-grade();
};

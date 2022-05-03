//passing object using function...
//example of sum of two complex number;

#include<iostream>
using namespace std;

class Complex
{
    int a;   //value any of two..
    int b;
    public:
    void Setdata(int v1,int v2)  //set the value..
    {
        a=v1;
        b=v2;
    }
    void Sumofcomplex(Complex c1,Complex c2)  //call object paramenter using function.. parameter syntax(class name any of name object name)
    {
        a=c1.a+c2.a;  //syntax= parameter.variable name    
        b=c1.b+c2.b;
    }
    void displaycomplex(void)
    {
        cout<<"the complex number of"<<a<<"+"<<b<<"i"<<endl;  //display complex number
    }
};

int main()
{
      Complex value1,value2,value3;
      value1.Setdata( 2,3);  //first complex value;;
      value1.displaycomplex();

      value2.Setdata(4,5);  //second complex value;
      value2.displaycomplex();
      
      value3.Sumofcomplex(value1,value2);  //sum of complex number..to print..
      value3.displaycomplex();   
}
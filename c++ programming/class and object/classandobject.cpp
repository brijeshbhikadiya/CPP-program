
//declare a variable using access modifier public and private....

#include<iostream>
using namespace std;
class Variable
{
   private :
   int a,b,c;
   public :
   int d,e;
   void setdata(int a1,int b1,int c1);
   void getdata()//all varables vallues are show in this function...
   {
       cout<<"the value of a is"<<a<<endl;
       cout<<"the value of b is"<<b<<endl;
       cout<<"the value of c is"<<c<<endl;
       cout<<"the value of d is"<<d<<endl;
       cout<<"the value of e is"<<e<<endl;
   }
};
void Variable ::setdata(int a1,int b1,int c1)//returntype classname ::(it called resolution oprater) functionname(arguments) abc value assigned
{
    a=a1;
    b=b1;
    c=c1;
}

int main()
{
    Variable brijesh;//class na varables ne access karva mate dot opartare are used.
    brijesh.d=2;
    brijesh.e=3;
    //brijesh.a=9;  its show error because a is a private number //private varbles only class na function threw used thay shake.......
    brijesh.setdata(6,7,8);//a.b.c ne value ne call kari..
    brijesh.getdata();
    return 0;
}
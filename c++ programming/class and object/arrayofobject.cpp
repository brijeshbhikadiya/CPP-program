
//array uisng object..

#include<iostream>
using namespace std;

class Employee
{
   int eid;
   int salary;

    public:    //je public no hoy automatic private thy jay...
    void setdata(void)
    {
        salary=120;
        cout<<"enter a employee id="<<endl;
        cin>>eid;
    }
    void getdata(void)
    {
        cout<<"the id of employee="<<eid<<endl;
    }
};

int main()
{
    Employee print[4];  //intialize array using class..
    /*Employee brijesh,bhavy,vansh;
    brijesh.setdata();
    brijesh.getdata();

     bhavy.setdata();
     bhavy.getdata();

     vansh.setdata();
     vansh.getdata();*/  //simple first way
     for(int i=0;i<3;i++) //second way   //always array hoy taya loop avaje kem ke loop ma easy re array ne intiallize karva mate.
     {
         print[i].setdata();   //array object using set and get data..
         print[i].getdata();
     }
     return 0;
} 

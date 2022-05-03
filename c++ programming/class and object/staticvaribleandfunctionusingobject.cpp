
/*static variable and static method..*/
//static variable=means a single copy of variable and shared all the objects indivisually.
//ahiya aek var count ne static karyo to have e badha object share kari leshe .
//static variable means also it is defult value is start from 0;

//static method=static methosis the independent of classes and objects..
//static method ye only static varible mate j use thay only..
//accesed by resoution oparters.(::)
//show below of the programme.

#include<iostream>
using namespace std;
class Variable
{
    int id;
    static int count; //static variable is intilize..  //aagal ddefine karvo pade..   //all are the private..

public:
    void setdata(void)
    {
        
        cout << "enter a id = " << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the id is = " << id << endl;
    }
    static void getcount(void) //static function... also called static method //only static variable mate j access thay..
    {
        // cout<<id;  //its shows the error because id is the not a static variable..
        cout << "the value of count is = " << count << endl;
    }
};

int Variable::count; //count=0(defult)  //static variable are defind...  //static means count aeni defult aeni value 0 thi start kare..//100 karvi to 100 thi chalu kare...

int main()
{
    Variable brijesh, bhavy, vansh; //3 variable are create..

    //brijesh.id=1  this shows errors because id is the private.

    brijesh.setdata(); //calls
    brijesh.getdata();
    Variable::getcount(); //static function  calls using classs and not used any types of objects..

    vansh.setdata();
    vansh.getdata();
    Variable::getcount();

    bhavy.setdata();
    bhavy.getdata();
    Variable::getcount();
}
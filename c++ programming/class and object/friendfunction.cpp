
// function called using friend function..
// sum of two complex number..
//police=compliler and class is our men   Sumcomplex and complex bane friend hoy aetale 
//friend function artale : likhit ma aape lakhelu ke tu mara private object ne aacces  kari shake.. jethi compliler tene use karava de..

#include <iostream>
using namespace std;

class Complex
{
    int a, b;   //friend function ahiya pan delcare karavi shake..
    // friend Complex sumNumber(Complex o1, Complex o2);

public:

    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }


    //below line means that non member -sumComplex function is allowed to do anything with my private parts (members)
    friend Complex sumNumber(Complex o1, Complex o2);

    void printNumber()
    {
        cout << "your complex number " << a << " + " << b << " i " << endl;
    }
};
Complex sumNumber(Complex o1, Complex o2)   //frind function no use karyo...
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()

{

    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(3, 5);
    c2.printNumber();

    sum = sumNumber(c1, c2);  //object no use no thay error aave.. aetala mate sum banavyo non member na use karine c1,c2...
    sum.printNumber();
    return 0;
}

// properties of friend is_function :

// 1.not int the scope of class aetale class ma define no thay..
// 2.it cannot be called from the object of that class..
// 3.can be invoke with\out the help of the  object..
// 3.object ne khali arguments ni rite levnu hoy..
// 4.can be decLARE INise the public or private..
// 5.it can be acces directly her their name and need object_name.member_name any member...


//this is all about the friend function.....
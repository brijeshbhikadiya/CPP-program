#include<iostream>
using namespace std;
float area(int);
int area(int,int);
int main()
{
    int r,l,b;
    float a,A;
    cout<<"enter the radius\n";
    cin>>r;
    a=area(r);
    cout<<a;
    cout<<"\nenter the length and width of retangle";
    cin>>l>>b;
    A=area(l,b);
    cout<<"\narea of reactangle is"<<A;
}
 float area(int R)
 {
     return(3.14*R*R);
 }
 int area(int x,int y)
 {
     return(x*y);
 }

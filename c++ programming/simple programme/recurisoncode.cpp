#include<iostream>  //function called it self called recursion........
using namespace std;
//int factorial(int a)
//{
  //  if(a<=1)
    //{                                  //if i entered 4
      //  return 1;
    //}
    //return a*factorial(a-1);              //4*return(3)
//}                                         //4*3*return(2)
//int main()                                //4*3*2*return(1)=24  its work
//{
  //  int a;
    //cout<<"enter a factorial number"<<endl;
    //cin>>a;
    //cout<<"the factorial of "<< a <<" is "<<factorial(a);
//}
int fb(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return fb(n-1) + fb(n-2);       //if i entered 4
}                                   //fb(5)
int main()                          //   fb(4)   +   fb(3)
{                                   //fb(3)+fb(2)+fb(2)+fb(1)
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    cout<<"the series of fibonacci "<<n<<" is "<<fb(n);
}
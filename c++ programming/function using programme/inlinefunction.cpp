#include<iostream>   //inline function are used to memmory are storedd by limited bytes.
using namespace std;
inline int fun();
int main()
{
    cout<<"you are in main";
    fun();
}
int fun()
{
    cout<<"you are in fun";
}
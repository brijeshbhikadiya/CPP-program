#include<iostream>
using namespace std;
int sum(int*,int*);
int main()
{
    int a,b;
    cout<<"enter two number";
    cin>>a>>b;
    int s=sum(&a,&b);
    cout<<"sum is"<<s;
}
int sum(int *x,int *y)
{
    return(*x+*y);
}
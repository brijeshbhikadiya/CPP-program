#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number";
    cin>>n;
    if(n%2==0 && n%3==0)
    {
        cout<<"this number is divisable by both";
    }
    else if(n%2==0)
    {
        cout<<"this number is divisable by 2";
    }
    else if(n%3==0)
    {
        cout<<"this number is divisable by 3";
    }
    else{
        cout<<"this number is not divisbale by 2 and 3";
    }
}
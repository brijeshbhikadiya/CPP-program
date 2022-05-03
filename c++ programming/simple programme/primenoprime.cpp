#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter a number";
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"this number is non prime";
            break;
        }
    }
    if(n==i)
    {
        cout<<"this number is prime number";
    }
}
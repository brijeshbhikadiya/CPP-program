#include<iostream>
using namespace std;
int main()
{
    int a,b,n;
    cout<<"press 1 can do sum\n";
    cout<<"press 2 can do substraction\n";
    cout<<"press 3 can do multiplaction\n";
    cout<<"what you are instrested in press";
    cin>>n;
    cout<<"enter a two number\n";
    cin>>a>>b;
    switch(n)
    {
        case 1:cout<<"sum is "<<a+b;
        break;
        case 2:cout<<"subsctraction is "<<a-b;
        break;
        case 3:cout<<"multiplaction is "<<a*b;
        break;
        default:
        cout<<"enter a valied number";
    }
}
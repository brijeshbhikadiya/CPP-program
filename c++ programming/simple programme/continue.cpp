#include<iostream>
using namespace std;
int main()
{
    int i;
    for(i=0;i<100;i++)
    {
        if(i%5==0)
        {
         continue;
        }
        cout<<i<<endl;
    }
}

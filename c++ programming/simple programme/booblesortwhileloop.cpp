#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter a size of array";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
    cout<<"arr["<<i<<"]";
    cin>>arr[i];
    }
    int count=1;
    while(count<n)
    {
        for(i=0;i<n-count;i++)
        {
               if(arr[i]>arr[i+1])
                {
                 int temp=arr[i];
                 arr[i]=arr[i+1];
                 arr[i+1]=temp;
                }
        }
        i++;
    }
    cout<<"the sorting order is";
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
    



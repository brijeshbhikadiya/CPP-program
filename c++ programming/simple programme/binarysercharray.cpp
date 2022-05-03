#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int key)
{
    int mid;
    int s=0;
    int e=n;
 
    while(s<=e)
    {
        mid=(s+e)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
             e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
}



int main()
{
    int n;
    cout<<"enter  a value of array "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter a value of element"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"arr["<<i<<"]"<<endl;
        cin>>arr[i];
    }
    int key;
    cout<<"enter a key value "<<endl;
    cin>>key;
    cout<<binarysearch(arr,n,key);
}
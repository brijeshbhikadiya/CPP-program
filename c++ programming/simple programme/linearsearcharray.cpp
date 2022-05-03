#include<iostream>
using namespace std;

int linersearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
    if(arr[i]==key)
    {
        return i;
    }
    }
    return -1;
}



int main()
{
    int n,i;
    cout<<"enter the value of n="<<endl;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cout<<"arr["<<i<<"]=";
        cin>>arr[i];
    }
    // for(i=0;i<n;i++)
   // {
      //  cout<<"arr["<<i<<"]="<<arr[i]<<endl;  //imporatnt part of programme... //biji aavi rite kari shkay.....
   // }
    int key;
    cout<<"enter the key of linear search"<<endl;
    cin>>key;
    cout<<linersearch(arr,n,key)<<endl;
}
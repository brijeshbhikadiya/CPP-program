#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    cout<<"arr["<<i<<"]";
    cin>>arr[i];
    }
    //int count=1;
    //while(count<n)                  //while and for loop both you can solve for any problem 
    //{
        for(int i=1;i<n;i++)     //for loop are easy for while loop i=1 thi starrt kar to n levanu and i=0 to n-1 levanu...
        {
            for(int j=0;j<n-i;j++)     //n hoy tenathi aek ochu sudhi for loop chale aetale for loop ma n-i.
        //for(int i=0;i<n-count;i++)
         {
             if(arr[j]>arr[i+1])
            {
             int temp=arr[i+1];
             arr[i+1]=arr[j];
             arr[j]=temp;
            }
         }
        }
        //count++;
    cout<<"the sorting order is";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
    



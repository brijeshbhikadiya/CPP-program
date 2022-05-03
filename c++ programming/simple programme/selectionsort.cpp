#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter a size of array";
    cin>>n;
    int arr[n];
    cout<<"enter a value of element are="<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"arr["<<i<<"]";
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)     //n-1 becuase second last element sudhi search karvanu hoy. if n=5 to 5-1=4 i<4 0 1 2 3 sudhi search thay...
    {                                               
        for(int j=i+1;j<n;j++)  //j+1 beacuse je i hoy aeni pachino elEMENT THi minimum find kERVANU STRAT THAY.E SERCH THASE N LAGI.
          {
              if(arr[j]<arr[i])     //here you put greater than the output are show in decending order.....
              {
              int temp=arr[j];        // compare the two variable  if condition true so element are interchange...           
              arr[j]=arr[i];
              arr[i]=temp;
              }
          }
    }
     cout<<"the sorting order is ";
    for(i=0;i<n;i++)
    {
    cout<<arr[i]<<" ";    //print the sorted order ....
    }
    return 0;


}
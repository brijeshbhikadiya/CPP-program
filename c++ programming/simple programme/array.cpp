#include<iostream>
using namespace std;
//int main()
//{
  //  int arr[3]={10,20,30};//intialize value by code time...
    //cout<<"arr[0]="<< arr[0]<<endl;
    //cout<<"arr[1]="<< arr[1]<<endl;
    //cout<<"arr[2]="<< arr[2]<<endl;
//}
int main() //run time intialize.....
{
    int n,i;
    cout<<"enter the value of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<"arr["<<i<<"]="<<arr[i]<<endl;  //imporatnt part of programme...//like effective programming....
    }
}
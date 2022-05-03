
//memory allocation using array....... progeram is print a price and price id using array and with object..

#include<iostream>
using namespace std;
class Shop    //shop name class..
{
    int Iteamid[100];    //class varaible 
    int Itemprice[100];
    int counter;
    public:
    void intcounter(void)    //create a function...  //third function declare...
    {
        counter=0;
    }
    void setprice(void);
    void displayprice(void);
};

void Shop ::setprice(void)   //first function declare..
{
    cout<<"enter your item id"<<counter+1<<" "<<endl;
    cin>>Iteamid[counter];
    cout<<"enter your item price"<<counter+1<<" "<<endl;
    cin>>Itemprice[counter];
    counter++;
}
void Shop ::displayprice(void)//second function declare..
{
    for(int i=0;i<counter;i++)  //jetli id hase taya sudhi counter halse...
    {
        cout<<"the price of item with id "<<Iteamid[i]<<" "<<"price is "<<Itemprice[i]<<" "<<endl;
    }
}
int main()
{
        Shop bantidukan;    //create a object a banti dukann..
        bantidukan.intcounter();
        //bantidukan.setprice();   //two ways to you can see 1.loop 2. paste kairne bov badhi var
        //bantidukan.setprice();
        //bantidukan.setprice();
        for(int j=0;j<3;j++)     //2.method
        {
           bantidukan.setprice();
        }
        bantidukan.displayprice();  //call the three  of the function...
}
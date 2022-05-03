//give a bianry number and do a ones complemnt

#include<iostream>
#include<string>    //include string because string uses...
using namespace std;
class binary
{
    private:
    string s;
    void chk_bin();   //one function is private this define aagal aa function avshe..

    public:
    void read();            //all function declaration...
    void ones_complement();
    void display();  //total four function declare
};
void binary ::read(void)
{
    cout<<"enter a binary number"<<endl;
    cin>>s;
    cout<<endl;
}
void binary ::chk_bin(void)
{
    for(int i=0;i<s.length();i++)     //string che aetle condition aa rite chaeck karvi pade
    {
        if(s.at(i)!='0' && s.at(i)!='1')    //string hovathi condition pan avi rite j check thay use of at...
        {
            cout<<"this is not a binary number"<<endl;
            exit(0);
        }
    }
}
void binary ::ones_complement(void)
{
    chk_bin();  //this is the says to be nested a function function is said i am calls nested...//function aeni jate andro andar samji le so function ni andar function so its called nested function...
    for(int i=0;i<s.length();i++)
    {
    if(s.at(i)=='0')
    {
        s.at(i)='1';
    }
    else
    {
        s.at(i)='0';
    }
    }
}
void binary ::display(void)
{
    cout<<"display your ones complement of binary number"<<endl;
    for(int i=0;i<s.length();i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}
int main()
{
    binary b;  //b are the variable..
    //cout<<"enter a binary number"<<endl;
    //cin>>n;
    b.read();
    //b.chk_bin();  //this is not valid beacuse this member is private function...
    b.ones_complement();  
    b.display();
      //alll of the function calls...

}
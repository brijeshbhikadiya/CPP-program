#include<iostream>//structure is variable is stored diffrent data types...likes array stored same data types...
using namespace std;
struct bb
{
    int bbid;
    char bbname;
    int bbsalary;
};

int main()
{
    struct bb brijesh;
    brijesh.bbid=1;
    brijesh.bbname='m';
    brijesh.bbsalary=100000000;
    cout<<"this value is"<< brijesh.bbid <<endl;
    cout<<"this value is"<< brijesh.bbname <<endl;
    cout<<"this value is"<< brijesh.bbsalary <<endl;
    return 0;
}
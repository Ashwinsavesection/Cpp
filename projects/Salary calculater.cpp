#include <iostream>
using namespace std;
int main()
{
    int salary;
    cout<<"\nEnter Your Basic Salary : ";
    cin>>salary;
    float gs,da,hra;
    if(salary<1500)
    {
        hra=salary*0.10;
        da=salary*0.90;
    }
    else
    {
        hra=500;
        da=salary*0.98;
    }
    gs=salary+hra+da;
    cout<<"Basic salary : "<<salary<<endl;
    cout<<"     HRA     : "<<hra<<endl;
    cout<<"     DA      : "<<da<<endl;
    cout<<"\n--------------------------\n";
    cout<<"Gross salary : "<<gs<<endl;
    return 0;
}


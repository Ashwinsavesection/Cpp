#include <iostream>
using namespace std;
int main()
{
    int days;
    float fine;
    cout<<"Enter your returned days : ";
    cin>>days;
    if(days<=5)
    {
        cout<<"Per Day fine is : 0.50";
        fine=days*0.50;
        cout<<"\nFine : "<<fine<<endl;
    }
    else if(days>=6 && days<=10)
    {
        cout<<"Per Day fine is : 1";
        fine=days*1;
        cout<<"\nFine : "<<fine<<endl;
    }
    else if(days>=10 && days<=30)
    {
        cout<<"Per Day fine is : 5";
        fine=days*5;
        cout<<"\nFine : "<<fine<<endl;
    }
    else
        cout<<"\nSorry.Your Membership canceled."<<endl;
    return 0;
}


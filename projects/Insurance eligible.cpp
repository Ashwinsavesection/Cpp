#include <iostream>
using namespace std;
int main()
{
    char ma,gen;
    int age;
    cout<<"You Are Married (y/n) : ";
    cin>>ma;
    if(ma=='y' || ma=='Y')
    {
        cout<<"\nYour Eligible For Insurance."<<endl;
    }
    else if(ma=='n' || ma=='N')
    {
        cout<<"\nYour gender (m/f) : ";
        cin>>gen;
        if(gen=='m' || gen=='M')
        {
            cout<<"\nEnter your age : ";
            cin>>age;
            if(age>30)
            {
                 cout<<"\nYour Eligible For Insurance."<<endl;
            }
            else
            {
                 cout<<"\nYour Not Eligible For Insurance."<<endl;
            }
        }
        else if(gen=='f' || gen=='F')
        {
            cout<<"\nEnter your age : ";
            cin>>age;
            if(age>25)
            {
                 cout<<"\nYour Eligible For Insurance."<<endl;
            }
            else
            {
                 cout<<"\nYour Not Eligible For Insurance."<<endl;
            }
        }
        else
        {
            cout<<"\ninvalid input."<<endl;
        }
    }
    else
    {
        cout<<"\ninvalid input."<<endl;
    }
    return 0;
}


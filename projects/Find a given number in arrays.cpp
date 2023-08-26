#include <iostream>
using namespace std;
int main()
{
    int a[100],n,i,fi;
    cout<<"\nEnter the limit : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"\nEnter The Value Of a["<<i<<"] : ";
        cin>>a[i];
    }
    cout<<"\nEnter The Value To Search : ";
    cin>>fi;
    for(i=1;i<=n;i++)
    {
        if(a[i]==fi)
        {
            cout<<"\na["<<i<<"] : "<<a[i]<<endl;
            return 0;
        }

    }
    cout<<"\nValue Not Found!!"<<endl;
    return 0;
}


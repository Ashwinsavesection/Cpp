#include <iostream>
using namespace std;
int main()
{
    int a[100],n,i,sum=0;
    cout<<"\nEnter the limit : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"\nEnter The Value Of a["<<i<<"] : ";
        cin>>a[i];
        sum+=a[i];
    }

    cout<<"\nSum of arrays Total : "<<sum<<endl;
    return 0;
}


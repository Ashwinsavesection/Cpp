#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter A&B value : ";
    cin>>a>>b;
    cout<<endl;
    if(a>b)
    {
        cout<<"A is greatest number"<<endl;
    }
    if(a<b)
    {
        cout<<"B is greatest number"<<endl;
    }
    if(a==b)
    {
        cout<<"A&B Is equal";
    }
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int i;
    int n,nl;
    cout<<"Enter MULTIPULATION Table : ";
    cin>>n;
    cout<<"Enter MULTIPULATION limit : ";
    cin>>nl;

    for(i=1;i<=nl;i++)
    {
        cout<<"\n"<<i<<" X "<<n<<" = "<<i*n;
    }
    return 0;
}

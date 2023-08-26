
#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"\nEnter The Number : ";
    cin>>n;
    int total=0;
    for(i=1;i<=n;i++)
    {
        total+=i;
    }
    cout<<"\nSum Of N Numbers : "<<total<<endl;
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int a[]={10,20,30,40,50};
    for( int x : a)
    {
        cout<<x<<endl;
    }
    cout<<"\nCount Of Arrays : "<<sizeof(a)/sizeof(int)<<endl;
    return 0;
}


#include <iostream>
using namespace std;
int main()
{
    int i;
    int  t,sum,r,n;
    for(i=100;i<=999;i++)
    {
        n=i;
        while(n>0)
        {
            r=n%10;
            sum+=(r*r*r);
            n=n/10;
        }
        if(sum==i)
            cout<<endl<<i<<endl;
        sum=0;
    }
    return 0;
}

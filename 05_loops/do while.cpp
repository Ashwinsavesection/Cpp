#include <iostream>
using namespace std;
int main()
{
    int i=1;
    int n;
    cout<<"Enter the limit : ";
    cin>>n;
    do
    {
       if(i%2==0)
           cout<<"\n"<<i;
        i++;
    }while(i<=n);
    return 0;
}

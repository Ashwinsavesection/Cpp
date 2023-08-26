#include<iostream>
using namespace std;

int main()
{
    char a[5]={'S','G','S','K','S'};
    for(auto x:a)
    {
        cout<<" "<<x;
    }
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(a[0]==a[j])
            {
                a[i]='x';
            }
        }
    }
    for(auto x:a){cout<<" "<<x;}
    return 0;
}

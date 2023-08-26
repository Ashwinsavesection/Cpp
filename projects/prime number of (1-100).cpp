#include <iostream>
using namespace std;
int main()
{
    int i;
    int c=0;
    for(i=1;i<=100;i++)
    {
        for(int a=1;a<=i;a++)
        {
            if(i%a==0)
                c++;
        }

        if(c==2)
            cout<<i<<endl;
        c=0;
    }
    return 0;
}

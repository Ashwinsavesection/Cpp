#include<iostream>
using namespace std;
int main()
{
    auto sum =[](int a,int b)
    {
        return a+b;
    };
    cout<<"Total : "<<sum(2,3)<<endl;
    return 0;
}

#include<iostream>
using namespace std;
//function overloading
int add(int a,int b)//function name is same
{
    return a+b;
}
int add(int a,int b,int c)//function name is same
{
    return a+b+c;
}
float add(float a,float b)//function name is same
{
    return a+b;
}
int main()
{
    cout<<"\nint 2: "<<add(1,1)<<endl;
    cout<<"\nint 3 : "<<add(1,1,1)<<endl;
    cout<<"\nfloat 2 : "<<add(1.5f,1.5f)<<endl;
    return 0;
}

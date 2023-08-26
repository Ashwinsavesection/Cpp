#include<iostream>
using namespace std;
inline int cube(int x)
{
    int result = x*x;
    return result;
}
int main()
{
    int x=8;
    cout<<"cube is x : "<<cube(x)<<endl;
    return 0;
}

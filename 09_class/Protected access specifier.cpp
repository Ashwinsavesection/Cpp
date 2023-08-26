#include<iostream>
using namespace std;

class A
{
    protected:
        int x=10;
};
class B:public A
{
public:
    void get()
    {
        cout<<"\nX : "<<x<<endl;
    }
};
int main()
{
    B o;
    // cant access value : o.x=10;
    o.get();
    return 0;
}

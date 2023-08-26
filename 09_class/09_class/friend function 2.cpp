#include<iostream>
using namespace std;
class base
{
    int x;
    public:
    base(){x=0;}
    void print()
    {
        cout<<"x : "<<x<<endl;
    }
    friend void setdata(base &o,int sv);
};
void setdata(base &o,int sv)
{
    o.x=sv;
}
int main()
{
    base o;
    o.print();
    setdata(o,5);
    o.print();
    return 0;
}

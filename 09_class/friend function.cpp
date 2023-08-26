#include<iostream>
using namespace std;
class a
{
int x,y;
    public:
    friend void setdata();

};
void setdata()
{
    a o;
    o.x=10;
    o.y=90;
    cout<<"X : "<<o.x<<endl;
    cout<<"Y : "<<o.y<<endl;
}
int main()
{
    setdata();
}

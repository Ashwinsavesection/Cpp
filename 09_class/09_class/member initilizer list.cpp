#include<iostream>
using namespace std;
class base
{
private:
    int x,y;
public:
    base(int a,int b):x(a),y(b){}
    void print()
    {
        cout<<"\nx : "<<x<<"\ny : "<<y<<endl;
    }
};

int main()
{
    base o(23,32);
    o.print();
    return 0;
}

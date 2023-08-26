#include<iostream>
using namespace std;
class base
{
    int x;
public:
    base(int a):x(a)
    {
        cout<<"The Value Of Base X : "<<x<<endl;
    }
};
class child : public base
{
    int y;
public:
    child(int a,int b):base(a),y(b)
    {
        cout<<"\nY : "<<y<<endl;
    }

};
int main()
{
    child o(12,34);
    return 0;
}

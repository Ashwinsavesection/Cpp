#include<iostream>
using namespace std;
class father
{
public:
    int a;
    void house()
    {
        cout<<"Have own 2BHK House."<<endl;
    }
};
class son:public father
{
public:
    void car()
    {
        cout<<"Have Own Audi Car."<<endl;
    }
};
int main()
{
    son o;
    o.a=10;
    cout<<o.a;
    o.car();
    o.house();
    return 0;
}

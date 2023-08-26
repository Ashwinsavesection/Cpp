#include<iostream>
using namespace std;
class grandfather
{
public:
    void house()
    {
        cout<<"You won 2BHK house."<<endl;
    }
};
class father:public grandfather
{
public:
    void bike()
    {
        cout<<"You won bike."<<endl;
    }
};
class son:public father
{
public:
    void carrom()
    {
        cout<<"You won carrom board."<<endl;
    }
};
int main()
{
    son o;
    o.house();
    o.bike();
    o.carrom();
    return 0;
}

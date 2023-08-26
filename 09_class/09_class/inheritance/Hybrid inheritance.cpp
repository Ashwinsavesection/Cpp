#include<iostream>
using namespace std;
class grandfather
{
public:
    void house()
    {
        cout<<"You won 3BHK house."<<endl;
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
class mother
{
public:
    void gold()
    {
        cout<<"you won 25gm gold"<<endl;
    }
};
class son:public mother,public father
{
public:
    void car()
    {
        cout<<"You won Audi car ."<<endl;
    }
};
int main()c
{
    son o;
    o.house();
    o.bike();
    o.gold();
    o.car();
    return 0;
}

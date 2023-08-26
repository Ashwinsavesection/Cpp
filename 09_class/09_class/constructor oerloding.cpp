#include<iostream>
using namespace std;
/*

    Default constructor
    Parameterized constructor
    copy constructor

*/
class math
{
private:
    int a,b;
    int c;
public:
    math()// default construtor
    {
        a=0;
        b=0;
        cout<<"Default constructor called"<<endl;
    }
    math(int x,int y)//Parameterized constructor input of the class object
    {
        a=x;
        b=y;
        cout<<"parameterized constructor called"<<endl;
    }
    math(math &any)//copy construtor
    {
        a=any.a;
        b=any.b;
        cout<<"copy constructor called"<<endl;

    }
    void add()
    {
        c=a+b;
        cout<<"Total : "<<c<<endl;
    }
};

int main()
{
    math o;
    math o1(20,20);
    math o2(o1);
    o.add();
    o1.add();
    o2.add();
    return 0;
}

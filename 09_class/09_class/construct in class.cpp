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
        cout<<"constructor called"<<endl;
    }
    math(int x,int y)//Parameterized constructor input of the class object
    {
        a=x;
        b=y;
        cout<<"constructor called"<<endl;
    }
    math(math &any)//copy construtor
    {
        a=any.a;
        b=any.b;
    }
    void add()
    {
        c=a+b;
        cout<<"Total : "<<c<<endl;
    }
};

int main()
{
    math o(10,20);
    math o1(o);
    cout<<"original constructor ";
    o.add();
    cout<<"copy constructor ";
    o1.add();
    return 0;
}

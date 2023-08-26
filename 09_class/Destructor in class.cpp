#include<iostream>
using namespace std;

class math
{
private:
    int a,b;
    int c;
public:
    math()
    {
        a=10;
        b=20;
    }
    ~math()
    {
        cout<<"Memory destroyder"<<endl;
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
    o.add();
    return 0;
}

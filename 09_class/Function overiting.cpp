#include<iostream>
using namespace std;

class base
{
protected:
    int a,b;
public:
    void add()
    {
        cout<<"\nEnter 2 nos : "<<endl;
        cin>>a>>b;
        cout<<"\nTotal : "<<a+b<<endl;
    }
};
class derived:public base
{
private:
    int c;
public:

    void add()
    {
        cout<<"\nEnter 3 nos : "<<endl;
        cin>>a>>b>>c;
        cout<<"\nTotal : "<<a+b+c<<endl;
    }
};
int main()
{
    derived d;
    d.add();
    base b;
    b.add();
    return 0;
}

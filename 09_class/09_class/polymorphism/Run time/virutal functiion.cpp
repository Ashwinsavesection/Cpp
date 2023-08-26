// Base Class Pointer derived Class Object
#include<iostream>
using namespace std;

class bike
{
public:
    virtual void start()=0;
};
class apache:public bike
{
public:
    void start()
    {
        cout<<"Apache bike start"<<endl;
    }
};
int main()
{
    apache a;
    bike *b;
    b=&a;
    b->start();
    return 0;
}


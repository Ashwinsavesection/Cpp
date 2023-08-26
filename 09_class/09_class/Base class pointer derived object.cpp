// Base Class Pointer derived Class Object
#include<iostream>
using namespace std;

class car//base class
{
public:
    void start()
    {
        cout<<"Car Start"<<endl;
    }

};
class bmw:public car//base class
{
public:
    void advancegear()
    {
        cout<<"BMW Advance Gear"<<endl;
    }
};
int main()
{
    /*bmw my;
    my.start();
    my.advancegear();*/

    bmw b;
    car *m=NULL;
    m=&b;
    (*m).start();
    return 0;
}


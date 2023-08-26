#include<iostream>
using namespace std;
class father
{
public:
    void fishing()
        {
            cout<<"Learn fishing."<<endl;
        }

};
class mother
{
public:
    void money()
    {
        cout<<"Given money."<<endl;
    }
};
class son:public father,public mother
{
public:
    void coding()
    {
        cout<<"Learn coding."<<endl;
    }
};
int main()
{
    son o;
    o.fishing();
    o.money();
    o.coding();

    return 0;
}

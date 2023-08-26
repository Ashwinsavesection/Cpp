#include<iostream>
using namespace std;
class bank
{
   public:
   virtual void debit()=0;
   virtual void loan()=0;

};

class hdfc: public bank
{
public:
    void debit()
    {
        cout<<"hdfc bank debit"<<endl;
    }
    void loan()
    {
        cout<<"hdfc bank loan 8%"<<endl;
    }
};

class ib:public bank
{
public:
    void debit()
    {
        cout<<"ib bank debit"<<endl;
    }
    void loan()
    {
        cout<<" ib bank loan 10%"<<endl;
    }
};
int main()
{
    hdfc h;
    bank *n=&h;
    n->debit();
    n->loan();
    return 0;
}

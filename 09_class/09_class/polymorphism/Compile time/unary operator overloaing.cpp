#include<iostream>
using namespace std;

class numb
{
    int x;
public:
    numb(){x=0;}
    numb(int a){x=a;}
    void print()
    {
        cout<<x<<endl;

    }
    void operator ++()
    {
        ++x;
    }
    void operator ++(int)
    {
        x++;
    }

    void operator --()
    {
        --x;
    }
    void operator --(int)
    {
        x--;
    }


};
int main()
{
    numb inc;
    ++inc;
    inc.print();
    inc++;
    inc.print();

    numb dec;
    --dec;
    dec.print();
    dec--;
    dec.print();
    return 0;
}


#include <iostream>
/*
    Access specifier

    1.public
    2.private
    3.protected
*/
using namespace std;
class bio
{
private ://private uses cant access value in a object because private values get that class only
    int b;
public:// public uses class values direct access without instuction
    int a;
    void print()
    {
        cout<<a;
    }
};
int main()
{
    bio o;
    o.a=10;
    o.print();
    return 0;
}

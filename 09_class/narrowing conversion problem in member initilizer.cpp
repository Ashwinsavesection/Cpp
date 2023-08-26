#include<iostream>
using namespace std;
class base
{
    char x;
    public:
    base(int a):x{a}{
        cout<<"X : "<<(int)x<<endl;
    }
};
int main()
{
    base o(2994524);
    return 0;
}

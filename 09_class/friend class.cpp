#include<iostream>
using namespace std;
class b;
class a
{
    int x=10;
    friend b;
};
class b
{
public:
        a o;
        void display()
        {
            cout<<"X : "<<o.x;
        }

};
int main()
{
    b b;
    b.display();
    return 0;
}

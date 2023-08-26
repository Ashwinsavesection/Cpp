#include<iostream>
using namespace std;
class base
{
    const int x;
    public:
    base(int a):x(a)
    {
        cout<<"the value of x : "<<x;
    }
};
class base1
{
    int age;
    string name;
    public:
    base1(string name,int age):name(name),age(age)
    {
        cout<<"\n\nName : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};
int main()
{
    base(67);
    base1("ashwin",15);
}

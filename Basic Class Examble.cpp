#include<iostream>
using namespace std;
class name
{
private:
    float radius;
public:
    float area()
    {
        cout<<"\nEnter The radius : ";
        cin>>radius;
        return (3.14*(radius*radius));
    }
    float cir()
    {
        return  (2*3.14*radius);
    }
};


int main()
{
    name o;
    float temb=o.area();
    cout<<"Area of Circle : "<<temb<<endl;
    cout<<"Circ of Circle : "<<o.cir();

    return 0;
}

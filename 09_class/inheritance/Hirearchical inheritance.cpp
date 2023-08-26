#include<iostream>
using namespace std;

class shape
{
public:
    float length,breath,radius;
};
class rectangle:public shape
{
public:
    void getrectangledetails()
    {
        cout<<"\nEnter Length : ";
        cin>>length;
        cout<<"\nEnter Breath : ";
        cin>>breath;
    }
    float rectangle_area()
    {
        if(!length || !breath)
            cout<<"Please First Enter value in getrectangledetails"<<endl;
        else
            cout<<"Area of rectangle : "<<length*breath<<endl;
    }
};
class circle:public shape
{
public:
    void getcircledetails()
    {
        cout<<"Enter Radius: ";
        cin>>radius;
    }
    float circle_area()
    {
        if(! radius)
            cout<<"Please First Enter value in getcircledetails"<<endl;
        else
            cout<<"Area of circle : "<<3.14*(radius*radius)<<endl;
    }
} ;
class square:public shape
{
public:
    void getsquaredetails()
    {
        cout<<"Enter side: ";
        cin>>length;
    }
    float square_area()
    {
        if(! length)
            cout<<"Please First Enter value in getsquaredetails"<<endl;
        else
            cout<<"Area of square : "<<length*length<<endl;
    }
};

int main()
{
    rectangle r;
    circle c;
    square s;

    r.getrectangledetails();
    r.rectangle_area();

    c.getcircledetails();
    c.circle_area();

    s.getsquaredetails();
    s.square_area();
    return 0;
}

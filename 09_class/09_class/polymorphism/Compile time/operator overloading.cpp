#include<iostream>
using namespace std;

class numb
{
    int real,img;
public:
    numb(){}
    numb(int a,int b){
        real=a;
        img=b;
    }
    void print()
    {
        cout<<real<<" + "<<img<<endl;

       }
    numb operator+ (numb x)
    {
       numb newi;
       newi.img=img+x.img;
       newi.real=real+x.real;
       return newi;
    }


};
int main()
{
    numb a(1,2);
    numb b(1,2);
    numb c=a+b;
    c.print();
    return 0;
}


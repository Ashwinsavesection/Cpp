#include<iostream>
#define pi 3.14
#define rectangle(length,breath) (length * breath)
#define str(s) #s
#define concat(a,b) a##b
using namespace std;
int main()
{
    cout<<"Area of a circle : "<<pi*5*5<<endl;
    cout<<"Area of a rectangle : "<<rectangle(5,8)<<endl;
    cout<<"String : "<<str(ahswin)<<endl;
    cout<<"Concatinate : "<<concat(20,08)<<endl;
    cout<<"__LINE__ : "<<__LINE__<<endl;
    cout<<"__FILE__ : "<<__FILE__<<endl;
    cout<<"__DATE__ : "<<__DATE__<<endl;
    cout<<"__TIME__ : "<<__TIME__<<endl;
    return 0;
}

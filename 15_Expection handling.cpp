#include<iostream>
using namespace std;
//throw string("ashiwn");
//throw 10;
//throw 23.5;
int main()
{
    int a=10,b=3,c;
    try
    {
        throw 'A';
        throw 5;
        throw 34.4;
        throw string("Error");
    }
    catch(int e)
    {
        cout<<"Error int : "<<e<<endl;
    }
    catch(float e)
    {
        cout<<"Error float : "<<e<<endl;
    }
    catch(char e)
    {
        cout<<"Error char : "<<e<<endl;
    }
    catch(string e)
    {
        cout<<"Error string : "<<e<<endl;
    }
    catch(...)
    {
        cout<<"Error in the program."<<endl;
    }
    return 0;
}

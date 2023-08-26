#include<iostream>
using namespace std;
class student
{
    string name;
    int age;
    public :

        static int coun;
        student(){coun++;}
        void setname(string na)
        {
            name=na;
        }
        string getname()
        {
            return name;
        }
        void print()
        {
            cout<<"Name : "<<name<<endl;
            cout<<"Age : "<<age<<endl;

        }

        static void total()
        {
            cout<<"\nTotal : "<<coun<<endl;
        }
};
int student::coun=0;
int main()
{
    student a,b,c,d,e,f;
    student::total();
    return 0;
}


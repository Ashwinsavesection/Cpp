#include<iostream>
using namespace std;
int main()
{
    int mo;
    cout<<"Enter The Month in number (1-12) : ";
    cin>>mo;
    string month;
    switch(mo)
    {
    case 1:
        month="January";
        break;

    case 2:
        month="February";
        break;

    case 3:
        month="March";
        break;

    case 4:
        month="April";
        break;

    case 5:
        month="may";
        break;

    case 6:
        month="June";
        break;

    case 7:
        month="july";
        break;

    case 8:
        month="August";
        break;

    case 9:
        month="September";
        break;

    case 10:
        month="october";
        break;

    case 11:
        month="november";
        break;

    case 12:
        month="December";
        break;

    default:
        month="Your Enter Number Invalid";
        break;
    }
    cout<<month;
    return 0;
}

#include<iostream>
using namespace std;
class Date
{
    int date,month,year;
public:
    Date();
    int showdata()
    {
        cout<<date<<"-"<<month<<"-"<<year;
    }

};
Date::Date()
{
    cout<<"Enter Date: ";
    cin>>date;
    cout<<"Enter Month: ";
    cin>>month;
    cout<<"Enter Year: ";
    cin>>year;
}
int main()
{
    Date d;
    d.showdata();
    return 0;
}

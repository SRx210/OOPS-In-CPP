#include<iostream>
using namespace std;
class dest
{
    int i,j;
public:
    dest()
    {
        i=0;
        j=0;
        cout<<"\nConstructor Called\n";
    }
    ~dest()
    {
        cout<<"Destructor Called\n";
    }
    void getdata()
    {
        cout<<"Enter Value of I: ";
        cin>>i;
        cout<<"Enter Value of J: ";
        cin>>j;
    }
    void showdata()
    {
        cout<<i<<""<<endl;
        cout<<j<<""<<endl;
    }

};
int main()
{
    dest d1;
    d1.getdata();
    d1.showdata();

    dest d2;
    d2.getdata();
    d2.showdata();

    return 0;
}

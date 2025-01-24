#include<iostream>
using namespace std;

class Phonebook
{
    string contname;
    int contno;

public:
    void setContact_name(string cname) {contname=cname;}
    void setContact_no(int cno) {contno=cno;}

    string getContact_name() {return contname;}
    int getContact_no() {return contno;}
};
int main()
{
    Phonebook c[50];
    int n;
    string coname;
    int cono;
    cout<<"Enter the number of contact details to be made: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Contact Name: ";
        cin>>coname;
        cout<<"Enter Contact Number: ";
        cin>>cono;
        c[i].setContact_name(coname);
        c[i].setContact_no(cono);
    }
    //displaying contact details
    for(int i=0;i<n;i++)
    {
        cout<<"\nContact Name is "<<c[i].getContact_name()<<endl;
        cout<<"Conatct Number is "<<c[i].getContact_no()<<endl;
    }
    cout<<"\n";

    return 0;
}

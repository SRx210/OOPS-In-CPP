#include<iostream>
using namespace std;

class calculator
{
public:
    int a,b;

    int result(){
        cout<<"Enter First Number: ";
        cin>>a;
        cout<<"Enter Second Number: ";
        cin>>b;}

    int add(){
        return a+b;}

    int sub(){
        return a-b;}

    int mul(){
        return a*b;}

    int div(){
        return a/b;}
};
int main()
{
    calculator c1;
    int x,y,choice;
    cout<<"Enter 1 to perform addition"<<endl;
    cout<<"Enter 2 to perform subtraction"<<endl;
    cout<<"Enter 3 to perform multiplication"<<endl;
    cout<<"Enter 4 to perform division"<<endl;
    cout<<"Enter 5 to exit"<<endl;
    cout<<"Enter Choice: ";
    cin>>choice;
    switch(choice)
    {
    case 1:
        c1.result();
        cout<<"Sum of Two numbers is "<<c1.add();
        break;

    case 2:
        c1.result();
        cout<<"Diffrence Between two numbers is: "<<c1.sub();
        break;

    case 3:
        c1.result();
        cout<<"Product of Two numbers is: "<<c1.mul();
        break;

    case 4:
        c1.result();
        cout<<"Division of two numbers is "<<c1.div();
        break;

    case 5:
        exit(0);
    }

    return 0;
}


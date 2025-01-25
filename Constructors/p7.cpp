#include<iostream>
using namespace std;
class X
{
int x1;
public:
X(){x1=1;}
X(int y){x1=y;}
X(X & xobj)
{x1=xobj.x1;}
~X(){cout<<"destructor called\n";}
void display()
{cout<<"x1="<<x1;}
};
int main()
{
X xobj1;
X xobj2(3);
X xobj3(xobj2);
xobj1.display();
xobj2.display();
xobj3.display();
return 0;
}

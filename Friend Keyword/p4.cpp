#include <iostream>
using namespace std;
class Number
{   public:
    double n;
    friend void add (Number &d1,Number & d2);
};


void add(Number &d1,Number & d2)
{   cout<<"sum="<<(d1.n+d2.n);
}
int main()
{   Number n1,n2;
    n1.n=3; n2.n=4;
    add(n1,n2);
    return 0;
}

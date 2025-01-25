#include<iostream>
using namespace std;
class complex
{
  int real,imag;
  public:
      complex()
      {
          real = 0;
          imag = 0;
      }
      complex(int r, int i)
      {
          real = r;
          imag = i;
      }
  friend int sum(complex c1, complex c2);
};
int sum(complex c1, complex c2)
{
  int z,y;
  z = c1.real + c2.real;
  y = c1.imag + c2.imag;
  cout<<"Sum of these two comlex numbers is: "<<z<<" + "<<y<<"i"<<endl;
}
int main()
{
 complex c1(2,3);
 complex c2(4,5);
 sum(c1,c2);


return 0;

}



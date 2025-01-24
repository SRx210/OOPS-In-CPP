//program to calculate the volume of cube and cylinder using method overloading
#include<iostream>
using namespace std;
const double pi=3.14;

int vol(int a)
{
  int vol;
  vol=a*a*a;
  return vol;
}

double vol(double r, double h)
{
  double v;
  v=pi*r*r*h;
  return v;
}

int main()
{
  int a;
  double rad, ht;
  cout<<"Enter Side of a cube"<<endl;
  cin>>a;
  cout<<"Enter Radius And Height of Cylinder"<<endl;
  cin>>rad>>ht;
  cout<<"\nThe Volume of Cube is "<<vol(a)<<endl;
  cout<<"The Volume of Cylinder is "<<vol(rad,ht)<<endl;

  return 0;
}

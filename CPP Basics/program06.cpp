//program to add two integers & two double values using method overloading
#include<iostream>
using namespace std;

int add(int a, int b)
{
  return(a+b);
}

double add(double a, double b)
{
  return(a+b);
}

int main()
{
  int a,b;
  double a1,a2;
  cout<<"Enter Two Integer Values"<<endl;
  cin>>a>>b;
  cout<<"Enter Two Double Values"<<endl;
  cin>>a1>>a2;
  cout<<"Sum of Two Integers Values = "<<add(a,b)<<endl;
  cout<<"Sum of Two Double Values = "<<add(a1,a2);

  return 0;
}

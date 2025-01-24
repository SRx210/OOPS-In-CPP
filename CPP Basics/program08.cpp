//program to calculate the area of circle and triangle using method overloading.
#include<iostream>
using namespace std;
const double pi=3.14;

float area(float r)
{
 float ar;
 ar=pi*r*r;
 return ar;
}

double area(double base, double height)
{
 double ar;
 ar = (0.5)*base*height;
 return ar;
}

int main()
{
 float rad;
 double b, h;
 cout<<"Enter Radius of Circle"<<endl;
 cin>>rad;
 cout<<"Enter Base and Height of Triangle"<<endl;
 cin>>b>>h;
 cout<<"\nArea of Circle is "<<area(rad)<<endl;
 cout<<"Area of Triangle is "<<area(b,h)<<endl;

 return 0;

}

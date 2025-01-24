//program to swap two integers, double values and characters using method overloading
#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
  int temp=b;
  b=a;
  a=temp;
  cout<<"\nAfter Swapping a = "<<a<<" and b = "<<b<<endl;
}

void swap(double &a, double &b)
{
 double temp=b;
 b=a;
 a=temp;
 cout<<"\nAfter Swapping a = "<<a<<" and b = "<<b<<endl;
}

void swap(char &a, char &b)
{
 char temp=b;
 b=a;
 a=temp;
 cout<<"\nAfter Swapping a = "<<a<<" and b = "<<b<<endl;
}

int main()
{
 int a,b;
 double a1,b1;
 char a2,b2;

 cout<<"Enter Two Integers Values"<<endl;
 cin>>a>>b;
 cout<<"Enter Two Double Values"<<endl;
 cin>>a1>>b1;
 cout<<"Enter Two Characters Values"<<endl;
 cin>>a2>>b2;

 cout<<"\nIntegers before swapping a = "<<a<<" and b = "<<b;
 swap(a,b);

 cout<<"\nDouble Values before swapping a = "<<a1<<" and b = "<<b1;
 swap(a1,b1);

 cout<<"\nCharacter before swapping a = "<<a2<<" and b = "<<b2;
 swap(a2,b2);

 return 0;

}


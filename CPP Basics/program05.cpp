//program to calculate the gross pay of regular and contract employees using method overloading
#include<iostream>
using namespace std;

double gpay(double sal, double rentall, double travel)
{
  double grosspay;
  grosspay=sal+rentall+travel;
  cout<<"Grosspay of Regular Employee is: "<<grosspay;
  return grosspay;
}

double gpay(double salary, double days)
{
 double grosspay;
 grosspay = salary*days;
 cout<<"Gross pay of Contract Employee is: "<<grosspay;
 return grosspay;
}

int main()
{
  int choice;
  cout<<"Enter 1 to calculate gross pay of regular employees"<<endl;
  cout<<"Enter 2 to calculate gross pay of contract employees"<<endl;
  cout<<"Enter 3 to exit"<<endl;
  while(1){
  cout<<"\nEnter Choice: ";
  cin>>choice;
  switch(choice)
  {
   case 1:
   gpay(20000,2000,1000);
   break;

   case 2:
   gpay(3000,30);
   break;

   case 3:
   exit(0);
   break;

   default:
   cout<<"Invalid Choice";
  }}

  return 0;
}

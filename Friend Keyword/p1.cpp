#include<iostream>
using namespace std;
class DB;
class DM
{
  double m,cm;
  public:
  void getdata()
  {
   cout<<"Enter value in meter: ";
   cin>>m;
   cout<<"Enter value of centimeter: ";
   cin>>cm;
  }
  friend double sum(DM a, DB b);
};
class DB
{
 double ft, inc;
 public:
 void getdata()
 {
  cout<<"Enter value in feet: ";
  cin>>ft;
  cout<<"Enter value in inches: ";
  cin>>inc;
 }
 friend double sum(DM a, DB b);
};
double sum(DM a, DB b)
{
  double i,j,k,l;
  i=(a.m + (a.cm/100));
  j=(b.ft + (b.inc/12));
  k=(i+(j*0.34)); //1 ft = 0.304m
  cout<<"The total value in meters = "<<k<<endl;
  return k;

}
int main()
{
  DM a;
  DB b;
  int choice;
  char o;
  cout<<"Enter 1 to use meter and centimeter"<<endl;
  cout<<"Enter 2 to use feet and inches: "<<endl;
  do{
  cout<<"Enter choice: ";
  cin>>choice;
  switch(choice)
  {
  case 1:
    a.getdata();
    sum(a,b);
    break;

  case 2:
    b.getdata();
    sum(a,b);
    break;

  default:
    cout<<"Invalid Choice";
    break;
  }
  cout<<"\nEnter 'y' or 'n' to continue: ";
  cin>>o;
  }while(o == 'y' || o == 'Y');

  return 0;
}

/*Write a program to print the details of students by creating a Student class. If no data is
passed while creating an object of the Student class, then default values should be
assigned. Include different constructors to initialize data members and also include
members functions to display student details*/
#include<iostream>
using namespace std;
class Student
{
  string name;
  int roll_no;
  string std1;
  public:
  Student() //default constructor
  {
    name = "ABC";
    roll_no = 01;
    std1 = "SE";
  }

  Student(string name1, int rno, string std2) //parametrised constructor
  {
    name = name1;
    roll_no = rno;
    std1 = std2;
  }

  Student(Student &cpy) //copy constructor
  {
    name = cpy.name;
    roll_no = cpy.roll_no;
    std1 = cpy.std1;
  }

  void display()
  {
    cout<<"Displaying Details\n";
    cout<<"Name: "<<name<<endl;
    cout<<"Roll No. : "<<roll_no<<endl;
    cout<<"Year: "<<std1<<endl;
  }
};

  int main()
{
    Student s1;
    s1.display();
    Student s2("DEF", 02, "SE");
    s2.display();
    Student s3("GHI", 03, "SE");
    s3.display();

    return 0;
 }

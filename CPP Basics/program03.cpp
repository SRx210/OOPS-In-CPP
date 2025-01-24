/*Write a program to implement two classes student and marks in external namespace stored in a header file grade_report. Assume necessary data members and include setter and getter functions and functions to compute the grade and percentage.(use an array of object to display grade report of each student)
student_report.cpp*/

#include <iostream>

#include <string>

#include "gradereport.h"

using namespace gradereport;

using namespace std;



int main()

{   student s[10];

    report m[10];

    cout<<"enter the no of grade reports to be prepared\n";

    int n;

    cin>>n;

    string studname,brname;

    int r,mks1,mks2,mks3;

    for(int i=0;i<n;i++)

    {   cout<<"enter student name,branch and rollno\n";

        cin>>studname>>brname>>r;

        s[i].setRollno(r);

        s[i].setStudName(studname);

        s[i].setBranch(brname);

        cout<<"enter students marks in subjects sub1,sub2,sub3\n";

        cin>>mks1>>mks2>>mks3;

        m[i].setMk1(mks1); m[i].setMk2(mks2); m[i].setMk3(mks3);

        m[i].computePercent(); m[i].computeGrade();

    }

    for(int i=0;i<n;i++)

    {   cout<<"**************** GRADE REPORT FOR STUDENT "<<(i+1)<<" ****************\n";

        cout<<"student Name:"<<s[i].getStudName()<<endl;

        cout<<"student Branch:"<<s[i].getBranch()<<endl;

        cout<<"student rollno:"<<s[i].getRollNo()<<endl;

        cout<<"subject 1 marks:"<<m[i].getMk1()<<endl;

        cout<<"subject 2 marks:"<<m[i].getMk2()<<endl;

        cout<<"subject 3 marks:"<<m[i].getMk3()<<endl;

        cout<<"Percentage:"<<m[i].getPercent()<<endl;

        cout<<"Grade:"<<m[i].getGrade()<<endl;

        cout<<"*******************************************************************\n";

    }

    return 0;

}

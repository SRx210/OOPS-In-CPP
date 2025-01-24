#include<iostream>
#include"payslip.h"
using namespace std;
using namespace payslip;

int main()
{
    int n,empid,sal,hrall,meds,ndays;
    string empname;
    employee e[50];
    payscale p[50];

    cout<<"Enter number of employees: ";
    cin>>n;
    for(int i=0;i<n;i++){
    {
        cout<<"Enter Name of Employee: ";
        cin>>empname;
        e[i].setName(empname);
        cout<<"Enter Employee ID: ";
        cin>>empid;
        e[i].setId(empid);

        cout<<"Enter Basic Salary: ";
        cin>>sal;
        cout<<"Enter House Rent Allowance: ";
        cin>>hrall;
        cout<<"Enter Medical Expenses: ";
        cin>>meds;
        cout<<"Enter Number of days worked: ";
        cin>>ndays;
        p[i].setSalary(sal);
        p[i].setHouser(hrall);
        p[i].setMedical(meds);
        p[i].setDay(ndays);
    }
    cout<<"\n";}
    //Display Payslip
    for(int i=0;i<n;i++){
    {
        cout<<"**************** PAYSLIP FOR EMPLOYEMENT "<<(i+1)<<" ****************\n";
        cout<<"Employee Name: "<<e[i].getName()<<endl;
        cout<<"Employee ID: "<<e[i].getId()<<endl;
        cout<<"Basic Salary: "<<p[i].getSalary()<<endl;
        cout<<"House Rent Allowance: "<<p[i].getHouser()<<endl;
        cout<<"Medical Expenses: "<<p[i].getMedical()<<endl;
        cout<<"Number of days worked: "<<p[i].getDay()<<endl;
    }
    cout<<"\n";}

    return 0;

}

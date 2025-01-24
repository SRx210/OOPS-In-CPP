#include<string>
using namespace std;
namespace payslip
{
    class employee
    {
        int id;
        string ename;
    public:
        void setName(string empname) {ename=empname;}
        void setId(int eid) {id=eid;}

        string getName() {return ename;}
        int getId() {return id;}

    };

    class payscale
    {
        string month;
        int hra,med,days,salary;
    public:
        void setMonth(string mon) {month=mon;}
        void setSalary(int sal) {salary=sal;}
        void setHouser(int rent) {hra=rent;}
        void setMedical(int m) {med=m;}
        void setDay(int d) {days=d;}

        string getMonth() {return month;}
        int getSalary() {return salary;}
        int getHouser() {return hra;}
        int getMedical() {return med;}
        int getDay() {return days;}
    };
}


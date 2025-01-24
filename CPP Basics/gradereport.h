#include<string>

using namespace std;

namespace gradereport

{   class student

    {   int rollno;

        string sname;

        string branch;

        public:

        void setRollno(int r){rollno=r;}

        void setStudName(string s) {sname=s;}

        void setBranch(string br)  {branch=br;}

        string getStudName(){   return sname;}

        int getRollNo(){ return rollno;}

        string getBranch() { return branch;}

    };



    class report

    {   double mk1,mk2,mk3,per;

        string grade;

        public:

        void setMk1(int m1){mk1=m1;}

        void setMk2(int m2){mk2=m2;}

        void setMk3(int m3) {mk3=m3;}

        void computePercent()

        {   per=(mk1+mk2+mk3)/300*100;  }

        void computeGrade()

        {   if(per>=70) {grade="DISTINCTION";}

            else if(per>=60 && per <70){ grade="FIRST";}

            else if(per>=50 && per<60) {grade="SECOND";}

            else if(per>=40 && per<50) {grade="PASS";}

            else {grade="FAIL";}

        }

        int getMk1(){return mk1;}

        int getMk2(){ return mk2;}

        int getMk3() { return mk3;}

        double getPercent(){return per;}

        string getGrade() { return grade;}

    };

}



#include<iostream>
#include<math.h>
using namespace std;
class Student
{
    int scores[5];
public:
    int sum = 0;
    void input()
    {
        for(int i=0;i<5;i++)
        {
            cin>>scores[i];
        }
    }
    friend int calculateTotalScore(Student s1);
};
int calculateTotalScore(Student s1)
{
    for(int i=0;i<5;i++)
    {
        s1.sum = s1.sum + s1.scores[i];
    }
    return s1.sum;

}
int main()
{
    int n;
    cin>>n;
    Student *s = new Student[n]; //creating an array of n students
    for(int i=0;i<n;i++) //entering marks
    {
        s[i].input();
    }
    int kristen_score = calculateTotalScore(s[0]);
    int count=0;
    int total;
    for(int i=1;i<n;i++)
    {
        total = calculateTotalScore(s[i]);
        if(total>kristen_score)
        {
            count++;
        }
    }

    cout<<count;
    return 0;
}


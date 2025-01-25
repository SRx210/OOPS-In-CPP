#include<iostream>
using namespace std;
const double pi = 3.14;
class Solid
{
    double radius,height;
public:
    Solid()
    {
        double rad=2.76;
        radius = rad;
        cout<<"Enter height: ";
        cin>>height;
    }
    double volume_cylinder()
    {
        double vcyl;
        vcyl = pi*radius*radius*height;
        return vcyl;
    }
    double volume_cone()
    {
        double vcone;
        vcone = pi*radius*radius*(height/3);
        return vcone;
    }
};

int main()
{
    Solid s;
    cout<<"Volume of cylinder is = "<<s.volume_cylinder();
    cout<<"\nVolume of cone is = "<<s.volume_cone();
    return 0;
}

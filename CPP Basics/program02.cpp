#include<iostream>
using namespace std;

class box
{
    double length,breadth,height,vol,area;
public:
    void setLength(int l) {length=l;}

    void setBreadth(int b) {breadth=b;}

    void setHeight(int h) {height=h;}

    double volume()
    {
        vol=length*breadth*height;
        return vol;
    }

    double surface_area()
    {
        area = 2*((length*breadth)+(breadth*height)+(height*length));
        return area;
    }



    double getLength() {return length;}

    double getBreadth() {return breadth;}

    double getHeight() {return height;}

};
int main()
{
    box shape;
    shape.setLength(2.5);
    shape.setBreadth(3.5);
    shape.setHeight(5.5);
    cout<<"The Volume of Box is "<<shape.volume()<<endl;
    cout<<"The Surface Area of Box is "<<shape.surface_area()<<endl;

    return 0;
}


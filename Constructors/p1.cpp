#include<iostream>
using namespace std;
class Box
{
    int length,breadth,height;
public:
    Box(int len, int bread, int ht);
    int show_volume()
    {
        int y;
        y = length*breadth*height;
        return y;
    }

    int show_surfacearea()
   {
       int z;
       z = 2*((length*breadth) + (breadth*height) + (length*height));
       return z;
   }

};
Box::Box(int len, int bread, int ht)
{
        length = len;
        breadth = bread;
        height = ht;
}

int main()
{
    Box b1(2, 4, 6);
    cout<<"Surafce Area = "<<b1.show_surfacearea();
    cout<<"\nVolume = "<<b1.show_volume();
    return 0;
}


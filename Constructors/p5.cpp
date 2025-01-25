/*Write a program to implement a class ‘Complex Nos’ with data members(real,imag).
Include parameterised and copy constructors to initialize data members and also
include members functions to compute and display the sum and difference of complex
nos.*/
#include<iostream>
using namespace std;
class Complex_Nos
{
    int real,imag;
public:
    Complex_Nos(int r, int img)
    {
        real=r;
        imag=img;
    }
    Complex_Nos(Complex_Nos &cpy)
    {
        real=cpy.real;
        imag=cpy.imag;
    }
    void add_disp(Complex_Nos &cpy)
    {
        int y,z;
        y = real + cpy.real;
        z = imag + cpy.imag;
        cout<<"Sum: "<<y<<""<<" + "<<z<<"i";
    }
    void sub_disp(Complex_Nos &cpy)
    {
        int w,x;
        w = real - cpy.real;
        x = imag - cpy.imag;
        cout<<"\nDifference: "<<w<<""<<" + "<<x<<"i";
    }
};
int main()
{
    Complex_Nos c(2,3);
    Complex_Nos c1(4,5);
    c.add_disp(c1);
    c.sub_disp(c1);

    return 0;
}

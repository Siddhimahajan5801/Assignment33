#include <iostream>
using namespace std;

class Shape
{
public:

    double a, b;

    void get_data(double x, double y=0)
    {
       a=x;
       b=y;
    }

    virtual void display_area ()=0;

};

class Triangle : public Shape
{
public:

     void display_area ()
    {
        double area;
        area= 0.5*a*b;

        cout<<"-----------------------------------------------------------------------\n";
        cout<<"Area of Triangle with \nBase = "<<a<<" and Height = "<<b<<" is  : "<<area<<endl;
        cout<<"-----------------------------------------------------------------------\n\n\n";
    }

};

class Rectangle : public Shape
{
public:

     void display_area ()
    {
        double area;
        area= a*b;

        cout<<"-----------------------------------------------------------------------\n";
        cout<<"Area of Rectangle with \nLength = "<<a<<" and Breadth = "<<b<<" is   :   "<<area<<endl;
        cout<<"-----------------------------------------------------------------------\n\n\n";
    }
};

class Circle : public Shape
{
public:

    void display_area()
    {
        double area;
        area= 3.14*a*a;

        cout<<"-----------------------------------------------------------------------\n";
        cout<<"Area of Circle with \nRadius = "<<a<<" is  :  "<<area<<endl;
        cout<<"-----------------------------------------------------------------------\n\n\n";
    }
};

int main ()
{
    Triangle T;
    Rectangle R;
    Circle C;

    T.get_data(8,9);
    T.display_area();

    R.get_data(8,9);
    R.display_area();

    C.get_data(5);
    C.display_area();

    return 0;
}

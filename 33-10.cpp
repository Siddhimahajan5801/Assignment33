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

class Square : public Shape
{
public:
    double area;

    void display_area()
    {
        area= a*a;
        cout<<"\nThe area of the Square is :  "<<area<<endl;
    }
};

class Parallelogram : public Shape
{
public:
    double area1;

    void display_area()
    {
        area1= a*b;
        cout<<"\nThe area of parallelogram is :  "<<area1<<endl;
    }
};


int main ()
{
    Square S;
    double side;

    cout<<"Enter the side of the square : ";
    cin>>side;

    S.get_data(side);
    S.display_area();

    cout<<"\n------------------------------------------------------\n";

    Parallelogram P;
    double base, height;

    cout<<"Enter the base and height of the parallelogram : \n";
    cin>>base>>height;

    P.get_data(base,height);
    P.display_area();

    cout<<"\n-------------------------------------------------------\n";

    return 0;

}

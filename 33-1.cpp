#include <iostream>
using namespace std;

class Shape
{
public:

    double a, b;

    void get_data()
    {
       cin>>a>>b;
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
        cout<<"-----------------------------------------------------------------------\n";
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
        cout<<"Area of Rectangle with \nLength = "<<a<<" and Breadth = "<<b<<" is    :   "<<area<<endl;
        cout<<"-----------------------------------------------------------------------\n";
    }
};

int main ()
{
    int choice;

    cout<<"Enter whose area do You want to calculate \n 1. Triangle \n 2. Rectangle \n\n Choice : ";
    cin>>choice;
    cout<<endl;

    if (choice == 1 )
    {
        Triangle obj1;
        cout<<"Enter the base and height of the Triangle\n";
        obj1.get_data();
        obj1.display_area();
    }

    else if (choice == 2)
    {
        Rectangle obj2;
        cout<<"Enter the length and breadth of the Rectangle\n";
        obj2.get_data();
        obj2.display_area();
    }

    else
    {
        cout<<"Enter 1 or 2 \nInvalid Choice!!! \n";
    }

    return 0;
}

#include <iostream>
using namespace std;

class Shape
{
public:

    double a, b;

    void get_data(int x, int y=0)
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
        cout<<"Area of Triangle with \nBase = "<<a<<" and Height = "<<b<<" is : "<<area<<endl;
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
        cout<<"Area of Rectangle with \nLength = "<<a<<" and Breadth = "<<b<<" is : "<<area<<endl;
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
    int choice;

    cout<<"Enter the shape whose area You want to calculate \n 1. Triangle \n 2. Rectangle \n 3. Circle \n\n Choice : ";
    cin>>choice;
    cout<<endl;

    switch (choice)
    {
    case 1:
    {
        Triangle obj1;
        double b,h;
        cout<<"Enter the base and height of the Triangle\n";
        cin>>b>>h;
        obj1.get_data(b,h);
        obj1.display_area();
        break;
    }
    case 2:
    {
        Rectangle obj2;
        double l,b;
        cout<<"Enter the length and breadth of the Rectangle\n";
        cin>>l>>b;
        obj2.get_data(l,b);
        obj2.display_area();
        break;
    }
    case 3:
    {
        Circle obj3;
        double radius;
        cout<<"Enter the radius of the Circle \n";
        cin>>radius;
        obj3.get_data(radius);
        obj3.display_area();
        break;
    }
    default:
    {
        cout<<"Enter 1,2 or 3 \nInvalid Choice!!! \n";
    }

  }

    return 0;
}

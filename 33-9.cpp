#include <iostream>
using namespace std;

class Volume
{
public:

    double a;
    double volume;

    void get_a()
    {
        cin>>a;
    }
    virtual void display_volume ()=0;
};

class Cube : public Volume
{
public:
    void display_volume ()
    {
        volume= a*a*a;
        cout<<"\nVolume of the Cube is :  "<<volume<<endl;
    }
};

class Sphere : public Volume
{
public:
    void display_volume ()
    {
        volume = (4/3)*3.14*a*a*a;
        cout<<"\nVolume of the Sphere is :  "<<volume<<endl;
    }
};

int main ()
{
    Cube C;
    cout<<"Enter the side of the cube : ";
    C.get_a();
    C.display_volume();

    cout<<"\n-------------------------------------------------\n";

    Sphere S;
    cout<<"Enter the radius of the sphere : ";
    S.get_a();
    S.display_volume();

    cout<<"\n-------------------------------------------------\n";

    return 0;
}

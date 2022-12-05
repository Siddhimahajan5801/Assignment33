#include<iostream>
using namespace std;

class Proof
{
public:

    int a, b , c;

    void get_sides()
    {
        cout<<"Enter the sides of the triangle \n";
        cin>>a>>b>>c;
    }

    void display_tri()
    {
        cout<<"\nThe sides of the triangle are : "<<a<<","<<b<<" and "<<c<<endl;
    }
};

class compute : public Proof
{
public:
    void prove_Right_tri()
    {
        if ((a*a+b*b==c*c) || (b*b+c*c==a*a) || (a*a+c*c==b*b))
            cout<<"\nThe given Triangle is an right angled triangle!\n";

        else
           cout<<"\nThe given Triangle is not an right angled triangle!\n";

    }
};

int main ()
{
    compute obj;

    obj.get_sides();
    obj.display_tri();
    obj.prove_Right_tri();

    return 0;
}

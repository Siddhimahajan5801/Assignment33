#include<iostream>
using namespace std;

class A
{
private:
    int x, y;

public:
    A () {}

    A (int a , int b ){ x=a;  y=b; }

    void Display()
    {
        cout<<"x = "<<x<<" y = "<<y<<endl;
    }

    void Swap(A *a)
    {
        A temp;

        temp.x = a->x;
        a->x = x;
        x = temp.x;

        temp.y = a->y;
        a->y = y;
        y = temp.y;

    }
};

int main ()
{
    A obj1(8,4), obj2(6,5);

    cout<<"Before Swapping : \n";
    cout<<"Object 1  ";
    obj1.Display();
    cout<<"Object 2  ";
    obj2.Display();

    cout<<"\n-------------------------------------------\n";
    cout<<"After Swapping  : \n";

    obj1.Swap(&obj2);

    cout<<"Object 1  ";
    obj1.Display();
    cout<<"Object 2  ";
    obj2.Display();

    return 0;
}

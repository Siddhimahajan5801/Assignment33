#include<iostream>
using namespace std;

class Matrix
{
public:
    int a[2][2];   //2 x 2 Matrix

    void get_data()
    {
        cout<<"Enter the values of Matrix \n";

        for (int i=0; i<2; i++)
        {
           for (int j=0; j<2; j++)
           {
              cout<<"\n a"<<i+1<<j+1<<" = ";
              cin>>a[i][j];
           }
        }

    }

    void display_Matrix()
    {
       cout<<"-----------------------------------\n";
       cout<<"Matrix : \n\n";

       for (int i=0; i<2; i++)
        {
           for (int j=0; j<2; j++)
           {
                   cout<<a[i][j]<<"   ";

                   if (j==1)
                   cout<<endl;
           }
        }
        cout<<"-----------------------------------\n";
    }
};

class Calculate_Determinant : public Matrix
{
public:
    int determinant=0;

    void Calc_determinant()
    {
        determinant = a[1][1]*a[0][0] - a[0][1]*a[1][0];

        if (determinant<0)
        {
            determinant = -determinant;
        }

        cout<<"Determinant of a is : "<<determinant<<endl;
    }



};

int main ()
{
    Calculate_Determinant obj;

    obj.get_data();
    obj.display_Matrix();
    obj.Calc_determinant();

    return 0;
}

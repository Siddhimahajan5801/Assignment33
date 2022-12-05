#include <iostream>
#include<math.h>
using namespace std;

class photon
{
public:

    double wavelength; //wavelength is in Armstrong Ao

    void get_wl(double l)
    {
        wavelength=l/pow(10,-10);
    }
};

class photon_Energy : public photon
{
public:
    double energy;

    void calculate_photonEnergy()
    {
        energy = (6.626*(pow(10,-34))*3*(pow(10,8)))/wavelength ;

        cout<<"\n Energy of photons with wavelength = "<<wavelength<<" Ao is :  "<<energy<<endl;

    }
};
int main ()
{
    photon_Energy obj;

    obj.get_wl(23);
    obj.calculate_photonEnergy();
}

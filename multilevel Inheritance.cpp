#include <iostream>
using namespace std;
class Vehicle/// base class
{
    public:
        Vehicle()
        {
            cout << "This is from Vehicle class" << endl;
        }
};
class fourWheeler: public Vehicle
{
    public:
        fourWheeler()
        {
            cout<<"This is from fourWheeler class"<<endl;
        }
};
/// sub class derived from two base classes
class Car: public fourWheeler
{
    public:
        Car()
        {
            cout<<"This is from car class"<<endl;
        }
};
int main()
{
    ///creating object of sub class will invoke the constructor of base classes
    Car obj;
    return 0;
}




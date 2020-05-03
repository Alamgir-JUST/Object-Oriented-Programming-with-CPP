#include <iostream>
using namespace std;
class Vehicle/// base class
{
public:
    Vehicle()
    {
        cout << "This is a Vehicle" << endl;
    }
};
class Car: public Vehicle /// first sub class
{

};
class Bus: public Vehicle/// second sub class
{

};
int main()
{
    /// creating object of sub class will invoke the constructor of base class
    Car obj1;
    Bus obj2;
    return 0;
}




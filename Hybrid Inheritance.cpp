#include <iostream>
using namespace std;
class Vehicle  /// base class
{
      public:
        Vehicle()
        {
          cout << "This is a Vehicle" << endl;
        }
};
class Fare ///base class
{
    public:
        Fare()
        {
            cout<<"Fare of Vehicle\n";
        }
};
/// first sub class
class Car: public Vehicle
{

};
/// second sub class
class Bus: public Vehicle, public Fare
{

};
int main()
{
    /// creating object of sub class will invoke the constructor of base class
    Bus obj2;
    return 0;
}


#include <iostream>
using namespace std;
class Vehicle { /// first base class
  public:
    Vehicle()
    {
      cout << "This is a Vehicle" << endl;
    }
};
class FourWheeler { /// second base class
  public:
    FourWheeler()
    {
      cout << "This is a 4 wheeler Vehicle" << endl;
    }
};
/// sub class derived from two base classes
class Car: public Vehicle, public FourWheeler {

};
int main()
{
    /// creating object of sub class will invoke the constructor of base classes
    Car obj;
    return 0;
}


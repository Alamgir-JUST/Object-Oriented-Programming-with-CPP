#include <iostream>
using namespace std;
class Prime/// base class
{
    public:
        Prime()
        {
            cout << "This is a Prime University" << endl;
        }
};
/// sub class derived from two base classes
class Dept: public Prime
{

};
int main()
{
    /// creating object of sub class will
    /// invoke the constructor of base classes
    Dept obj;
    return 0;
}



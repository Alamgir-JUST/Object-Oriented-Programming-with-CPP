#include<iostream>
using namespace std;

class Numbers
{
    private:
        int num1, num2, num11, num22;
    public:
        Numbers(int x, int y)
        {
            num1 = x;
            num2 = y;
        }
        Numbers(const Numbers &ob)/// Copy constructor
        {
            num11 = ob.num1;//Assigned values by accessing num1, num2 using object
            num22 = ob.num2;
        }
        void num12()
        {
            cout<<num1<<" "<<num2<<endl;
        }
        void num1122()
        {
            cout<<num11<<" "<<num22<<endl;
        }
};

int main()
{
    Numbers obj1(10, 15); /// Normal constructor is called here
    Numbers obj2 = obj1; /// Copy constructor is called here
    /// Let us access values assigned by constructors
    obj1.num12();
    obj2.num1122();
    return 0;
}

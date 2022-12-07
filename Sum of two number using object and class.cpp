#include<iostream>
using namespace std;
class sum{///Class declaration
private:
    int num1, num2, res;
public:
    sum(int a, int b){///Constructor
        num1 = a;
        num2 = b;
    }
    void add()
    {
        res = num1 + num2;
    }
    void show()
    {
        cout<<"Summation is: "<< res <<endl;
    }
};

///Main Function
int main()
{
    int num1, num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;

    sum obj = sum(num1, num2);

    obj.add(); ///Addition Function

    obj.show(); ///Display Function

    return 0;
}

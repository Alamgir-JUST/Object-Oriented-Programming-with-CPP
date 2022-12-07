#include<iostream>
using namespace std;
class prime /// Class Declaration
{
    ///Member Variable Declaration
    int n, ck, i;
public:
    prime(int x)
    {
        n = x;
    }
    /// Object Creation For Class
    void calculate()
    {
        ck = 1;
        if(n<=1)
        {
            ck = 0;
        }
        {
            for (i = 2; i <= n / 2; i++)
                if (n % i == 0)
                {
                    ck = 0;
                    break;
                }
                else
                {
                    ck = 1;
                }
        }
    }
    void show()
    {
        if (ck == 1)
        {
            cout << n << " is Prime Number." << endl;
        }
        else
        {
            cout << n << " is Not Prime Numbers" << endl;
        }
    }
};
int main()
{
    int a;
    cout << "Enter the Number:";
    cin>>a;
    /// Object Creation For Class
    prime obj(a);
    /// Call Member Functions
    obj.calculate();
    obj.show();
    return 0;
}



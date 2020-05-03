
#include<iostream>
using namespace std;
class X
{
    int foo()
    {
        return 10;
    }

    char foo()
    {
        return 'a';
    }
};
int main()
{
    X obj;
    return 0;
}



#include<iostream>
using namespace std;
class Variable{
public:
    static int ID;//Static Variable
    string name = "ABCD";//Instance Variable
    void display()
    {
        string mobile = "234567";//Local Variable
        cout<<mobile<<endl;
    }
};
int Variable::ID = 1234;
int main()
{
    cout<<Variable::ID<<endl;//Accessing static variable
    Variable obj;
    cout<<obj.name<<endl;//Accessing Instance variable
    obj.display();
    return 0;
}
/*
========Output========
1234
ABCD
234567
*/


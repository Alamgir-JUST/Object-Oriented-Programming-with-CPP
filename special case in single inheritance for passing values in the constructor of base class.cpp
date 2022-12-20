#include<iostream>
using namespace std;
class parent{
public:
    parent(int number){
        cout<<"Value of the number from parent class is: "<<number<<endl;
    }
};
class child: public parent{
public:
    using parent::parent;//Adding the parent constructor to this scope
    child(): parent(10){
    }
};
int main()
{
    child ob(100);
    return 0;
}
//Output: Value of the number from parent class is: 100




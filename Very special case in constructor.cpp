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
class child2: public child{
public:
    using child::child;//Adding the child constructor to this scope
    child2(): child(10){
    }
};
int main()
{
    child2 ob(100);
    return 0;
}
//Output: Value of the number from parent class is: 100



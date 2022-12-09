/*
C++ program using the concept of OOP to find the sum of digits of a number
until the sum is reduced to a single digit
*/
#include<iostream>
using namespace std;
class Summation{
private:
    int n;
public:
    void input(){
        cout<<"Enter the number: ";
        cin>>n;
    }
    void process(){
        int sum = 0, i = 1;
        while(n/10 != 0){
            while(n != 0){
            int r = n % 10;
            sum = sum + r;
            n = n/10;
            }
            cout<<"Summation of the digits is: "<<sum<<" in "<<i<<" iteration."<<endl;
            n = sum;
            sum = 0;
            i++;
        }
    }
};
int main()
{
    Summation obj;
    obj.input();
    obj.process();
    return 0;
}

/*
=============Output============

Enter the number: 7777777
Summation of the digits is: 49 in 1 iteration.
Summation of the digits is: 13 in 2 iteration.
Summation of the digits is: 4 in 3 iteration.
*/

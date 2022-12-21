#include<iostream>
using namespace std;
class Strong{
private:
    int num, number;
public:
    Strong(int n){
        num = n;
        number = n;
    }
    int factorial(int p){
        int fact = 1;
        for(int i = 1; i <= p; i++){
            fact = fact * i;
        }
        return fact;
    }
    void Strong_Calculation(){
        int sum = 0;
        while(num != 0){
            int r = num % 10;
            sum = sum + factorial(r);
            num = num / 10;
        }
        cout<<"Summation of factorial of each digit is: "<<sum<<endl;
        if(sum == number){
            cout<<number<<" is a strong number"<<endl;
        }else{
            cout<<number<<" is not a strong number."<<endl;
        }
    }
};
int main()
{
    int n = 145;
    Strong obj(n);
    obj.Strong_Calculation();
    return 0;
}
/*
=============Output=============
Summation of factorial of each digit is: 145
145 is a strong number
*/

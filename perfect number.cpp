#include<bits/stdc++.h>
using namespace std;
class Perfect{//Class
private:
    int n;
public:
    Perfect(int n){//Constructor
        this->n = n;
    }
    int perfect_check(){//Function to check perfect
        int sum = 1;
        for(int i = 2; i * i <= n; i++){//Running loop for sqrt(n)
            if(n % i == 0){
                if(i * i == n){
                    sum = sum + i;
                }
                else{
                    sum = sum + i + n/i;
                }
            }
        }
        cout<<"Summation of Factors without n is: "<<sum<<endl;
        if(sum == n){
            return 1;
        }else{
            return 0;
        }
    }
};
int main()
{
    Perfect obj(16); //Enter any value here
    int res = obj.perfect_check();
    if(res == 1){
        cout<<"Perfect Number"<<endl;
    }else{
        cout<<"Not a Perfect Number"<<endl;
    }
    return 0;
}

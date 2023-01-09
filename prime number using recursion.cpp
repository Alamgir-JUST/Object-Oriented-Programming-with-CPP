#include<bits/stdc++.h>
using namespace std;
class Prime{
public:
    int prime_check(int n, int s){
        if(n == 1){
            return 0;
        }
        else if(s == 1){
            return 1;
        }else if(n % s == 0){
            return 0;
        }else{
            prime_check(n, s-1);
        }
    }
};
int main()
{
    int n;
    while(1){
        cout<<"Enter a Number: ";
        cin>>n;
        Prime obj;
        int r = obj.prime_check(n, sqrt(n));
        if(r == 1){
            cout<<n<<" is Prime Number"<<endl;
        }else{
            cout<<n<<" is not Prime Number"<<endl;
        }
    }
    return 0;
}

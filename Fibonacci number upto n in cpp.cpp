#include<iostream>
using namespace std;
class Fibonacci{
private:
    int n;
public:
    Fibonacci(int num){
        n = num;
    }
    void fibo(){
        int f = 0, s = 1;
        cout<<f<<" "<<s<<" ";
        for(int i = 2; i < n; i++){
            int t = f + s;
            f = s;
            s = t;
            cout<<t<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    Fibonacci obj(10);
    obj.fibo();
    return 0;
}

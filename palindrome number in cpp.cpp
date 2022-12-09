#include<iostream>
using namespace std;
class Palindrome{
private:
    int n;
public:
    void input(){
        cin>>n;
    }
    void process(){
        int num = n;
        int rev = 0;
        while(num != 0){
            int r = num % 10;
            rev = (rev * 10 ) + r;
            num = num/10;
        }
        cout<<"Reverse Value of the Entered Number: "<<rev<<endl;
        if(rev == n){
            cout<<n<<" is a Palindrome Number."<<endl;
        }else{
            cout<<n<<" is not a Palindrome Number."<<endl;
        }
    }
};
int main()
{
    Palindrome obj;
    obj.input();
    obj.process();
    return 0;
}

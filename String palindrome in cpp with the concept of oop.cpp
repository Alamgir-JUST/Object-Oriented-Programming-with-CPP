#include<bits/stdc++.h>
using namespace std;
class String_Palindrome{
public:
    int length(char ch[])
    {
        int i = 0;
        while(ch[i]!='\0'){
            i++;
        }
        return i;
    }
    void Palindrome()
    {
        char ch[1000];
        printf("Enter a String : ");
        cin>>ch;
        int ln = length(ch), ln2, ck = 0, i;
        ln2 = ln-1;

        for(i = 0;i < ln;i++){
            if(ch[i] != ch[ln2]){
                ck++;
            }
            ln2--;
        }
        if(ck == 0){
            cout<<ch<<" is Palindrome!!"<<endl;
        }else{
            cout<<ch<<" is Not palindrome!!"<<endl;
        }
    }
};
int main()
{
    String_Palindrome obj;
    obj.Palindrome();
    return 0;
}
/*
==========Output========
Enter a String : madam
madam is Palindrome!!

Enter a String : BUET
BUET is Not palindrome!!
*/

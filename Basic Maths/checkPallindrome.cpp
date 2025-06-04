#include <iostream>

using namespace std;

 int reverse(int n){
        int rev=0;
        while(n>0){
            int digit=n%10;
            rev = rev * 10 + digit;
            n /=10;
        }
        return rev;

    }
    bool isPalindrome(int n) {
        if(n<0) return false;
        int num = reverse(n);
        if(num == n){
            return true;
        }else{
            return false;
        }

    }

int main(){
    int n;
    cout<<"Enter a number to check pallindrom or not: "<<endl;
    cin>>n;
    bool res = isPalindrome(n);
    if(res){
        cout<<"pallindrome";
    }else{
        cout<<"not pallindrome";
    }
   
}

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
        //your code goes here TC: O(root of n);
        int cnt=0;
        for(int i=1; i*i<=n;i++){
            if(n%i==0){
                cnt++;
                if(i != n/i){
                    cnt++;
                }
            }
        }

        if(cnt > 2){
            return false;
        }else{
            return true;
        }
    }

int main(){
    int n=12;
    bool res= isPrime(n);
    if(res){
        cout<<"yes prime."<<endl;
    }else{
        cout<<"not prime."<<endl;
    }
}

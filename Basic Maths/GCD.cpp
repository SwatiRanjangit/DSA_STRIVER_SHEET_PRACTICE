//Brute-force: O(min(n1, n2))

#include <bits/stdc++.h>
using namespace std;
 int GCD(int n1,int n2) {
        
        for(int i = min(n1,n2); i>=1;i--){
            if(n1 % i==0 && n2%i==0){
                return i;
                
            }
        }
       return 1; 
}
int main(){
    int n1=20, n2=40;
    int res = GCD(n1,n2);
    cout<<"GCD is: "<<res<<endl;
}

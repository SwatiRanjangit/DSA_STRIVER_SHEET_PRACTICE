#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=123;
    
    // int temp=num;
    // int cnt=0;

    // while(temp>0){
    //     cnt++;
    //     temp /=10;
    // }
    int cnt = (int)log10(n)+1; // tc: O(log10(N))
    cout<<"count of digit in the number is: "<<cnt;

}
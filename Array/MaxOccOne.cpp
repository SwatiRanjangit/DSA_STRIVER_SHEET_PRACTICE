#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(int arr[],int n){
    int cnt=0,maxCnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cnt++;
            maxCnt = max(cnt,maxCnt);
        }else{
            cnt=0;
        }
    }
    return maxCnt;
 
}

int main() {
    int n=8;
   int arr[n]={1,0,0,1,1,0,0,1};
   int res = findMaxConsecutiveOnes(arr,n);
   cout<<"Max num of 1 is: "<<res;

    return 0;
}
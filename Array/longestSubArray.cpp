#include <bits/stdc++.h>
using namespace std;
//BRUTE FORCE TC: O(N3)
// int longestSubarray(int arr[],int n,int l){
//     int maxLen=0;

//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             int sum=0;
//             for(int k=i;k<=j;k++){
//                 sum+=arr[k];
               
               
//             }
//              if(sum==l){
//                      maxLen = max(maxLen, j-i+1);
//                 }
//         }
//     }
//     return maxLen;
    
// }


//BRUTE FORCE TC: O(N2)
// int longestSubarray(int arr[],int n,int l){
//     int maxLen=0;

//     for(int i=0;i<n;i++){
//         int sum=0;
//         for(int j=i;j<n;j++){
//             sum+=arr[j];
            
//              if(sum==l){
//                      maxLen = max(maxLen, j-i+1);
//                 }
//         }
//     }
//     return maxLen;
    
// }
//BETTER APPROACH
// int longestSubarray(int arr[],int n,int l){
//     int maxLen=0;

//     for(int i=0;i<n;i++){
//         int sum=0;
//         for(int j=i;j<n;j++){
//             sum+=arr[j];
            
//              if(sum==l){
//                      maxLen = max(maxLen, j-i+1);
//                 }
//         }
//     }
//     return maxLen;
    
// }
// TC-ordered map: O(N * LOG N)  for un-ordered: 0(N) or O(n2) SC: O(N)
// int longestSubarray(int arr[],int n,int k){
//     //arr = {10, 5, 2, 7, 1, 9}
//     map<int,int>preSum;
//     int maxLen=0;
//     int sum=0;

//     for(int i=0;i<n;i++){
//         sum +=arr[i];
//         if(sum == k){
//             maxLen = max(maxLen,i+1);
//         }
//         int rem = sum-k;
//         if(preSum.find(rem) != preSum.end()){
//             int len= i - preSum[rem];
//             maxLen = max(maxLen,len);
//         }
        
//         if(preSum.find(sum) == preSum.end()){
//             preSum[sum]=i;
//         }
//     }
//     return maxLen;
    
// }
//TC: O(2n) SC : o(1)
int longestSubarray(int arr[],int n,int k){
    
    int maxLen=0;
    int sum=arr[0];
    int left=0,right=0;
    while(right<n){
        while(left <=right && sum > k){
            sum-=arr[left];
            left++;
        }
        if(sum==k){
            maxLen=max(maxLen,right-left+1);
        }
        right++;
        if(right<n){
          sum+=arr[right];
        }
        

    }
    return maxLen;
    
}
int main() {
    int arr[6]={10, 5, 2, 7, 1, 9};
    int k=15;
    int res = longestSubarray(arr,6,k);
    cout<<"Logest subarray is: "<<res<<endl;

    return 0;
}
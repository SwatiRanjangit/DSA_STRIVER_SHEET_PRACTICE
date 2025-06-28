#include <bits/stdc++.h>
using namespace std;

//BRUTE FORCE TC: O(n3)
// int maxSubArray(int arr[], int n) {
//     int maxSub=INT_MIN;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             int sum=0;
//             for(int k=i;k<=j;k++){
//                 sum+=arr[k];
                
//             }
//             maxSub = max(maxSub,sum);
            
//         }
//     }
//     return maxSub;
// }

// BETTER TC: O(N2)
// int maxSubArray(int arr[], int n) {
//     int maxSub=INT_MIN;
//     for(int i=0;i<n;i++){
//         int sum=0;
//         for(int j=i;j<n;j++){
//             sum+=arr[j];
//            maxSub = max(maxSub,sum);
//         }
         
//     }
//     return maxSub;
// }

//OPTIMAL (Kaden's algo ) TC: O(n)

// int maxSubArray(int arr[], int n) {
//     int maxSub=INT_MIN;
//     int sum=0;
//     for(int i=0;i<n;i++){
//        sum+=arr[i];
//        maxSub = max(maxSub,sum);
//        if(sum<0){
//            sum=0;
//        }
         
//     }
//     return maxSub;
// }


//TO  PRINT MAXSUB ARRAY:

int maxSubArray(int arr[], int n) {
    int maxSub=INT_MIN;
    int sum=0;
    int start;
    int ansstart=-1,ansend=-1;
    for(int i=0;i<n;i++){
        if(sum==0){
             start=i;
        }
       sum+=arr[i];
       if(sum>maxSub){
           maxSub=sum;
           ansstart=start;
           ansend=i;
       }
       if(sum<0){
           sum=0;
       }
         
    }
    
    cout<<"MAX SUBARRAYS IS: "<<endl;
    for(int i=ansstart;i<ansend;i++){
        cout<<arr[i]<<" ";
    }
    return maxSub;
}

int main() {
    int arr[8]={-2,-3,4,-1,-2,1,5,-3};
    int res= maxSubArray(arr,8);
    cout<<"Max subarray is: "<<res<<endl;

    return 0;
}
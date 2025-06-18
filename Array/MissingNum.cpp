#include <bits/stdc++.h>
using namespace std;
/*Brute force TC(N(N2)) SC:O(1)*/
// int missingNum(int arr[],int n){
    
//     for(int i=1;i<=n;i++){
//           int flag=0;
//         for(int j=0;j<n-1;j++){
//             if(arr[j]==i){
//                 flag=1;
//                 break;
//             }
            
//         }
//          if(flag==0){
//                 return i;
//             }
      
// }
// return 0; 
// }

/*Better approach TC: O(N) SC: O(N)*/
// int missingNum(int arr[],int n){
//   int hash[n+1]={0};
//   for(int i=0;i<n;i++){
//       hash[arr[i]]++;
//   }
//   for(int i=1;i<=n;i++){
//       if(hash[i]==0){
//           return i;
//       }
//   }
//   return 0;
// }

/*Optimal approach*/
// int missingNum(int arr[],int n){
//    int total = n*(n+1)/2;
//    int sum=0;
//    for(int i=0;i<n;i++){
//        sum+=arr[i];
//    }
   
//    return total-sum;
 
// }

//Best approach
int missingNum(int arr[],int n){
    int xor1=0,xor2=0;
   for(int i=0;i<n-1;i++){
       xor1= xor1^arr[i];
       xor2 = xor2 ^ (i+1);
     
   }
   xor2 = xor2 ^ n;
//    for(int i=1;i<=n;i++){
//        xor2= xor2^i;
//    }
   return xor1^xor2;
 
}

int main() {
    int n=5;
   int arr[n]={1,3,2,5};
   int res = missingNum(arr,n);
   cout<<"Missing number is: "<<res;

    return 0;
}
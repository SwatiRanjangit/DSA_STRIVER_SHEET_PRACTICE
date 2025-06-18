#include <bits/stdc++.h>
using namespace std;
/*BRUTE FORCE(linear search) TC: O(N2)*/

// int singleNumber(int arr[],int n){
    
//    for(int i=0;i<n;i++){
//        int num=arr[i];
//        int cnt=0;
//        for(int j=0;j<n;i++){
//            if(arr[j]==num){
//                cnt++;
//            }
//        }
       
//        if(cnt==1){
//            return num;
//        }
//    }
//    return 0;
 
// }

//USING HASHING: Better TC: O nlog m + o(n/2)+1 SC: o(n/2)+1

// int singleNumber(int arr[],int n){
//     int maxi=0;
//    for(int i=0;i<n;i++){
//       maxi=max(maxi,arr[i]);
//    }
//    int hash[maxi]={0};
   
//    for(int i=0;i<n;i++){
//        hash[arr[i]]++;
//    }
   
//    for(int i=0;i<maxi;i++){
//        if(hash[i]==1){
//            return i;
//        }
//    }
//    return 0;
 
// }
//USING MAP : BEST
// int singleNumber(int arr[],int n){
//    map<int,int> s;
//    for(int i=0;i<n;i++){
//        s[arr[i]]++;
//    }
   
//    for(auto it: s){
//        if(it.second==1){
//            return it.first;
//        }
//    }
//    return 0;
 
// }

//OPTIMAL SOL TC: O(N)


int singleNumber(int arr[],int n){
   int xor1;
   for(int i=0;i<n;i++){
       xor1 = xor1 ^ arr[i];
   }
   return xor1;
 
}

int main() {
    int n=9;
   int arr[n]={1,1,2,3,4,3,4,5,5};
   int res = singleNumber(arr,n);
   cout<<"Max num of 1 is: "<<res;

    return 0;
}
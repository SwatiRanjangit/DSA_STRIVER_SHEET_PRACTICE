#include <bits/stdc++.h>
using namespace std;
//TC: O(n2)
// int majorityElement(int arr[],int n){
//    for(int i=0;i<n;i++)
//    {
//        int ele=arr[i];
//        int cnt=0;
//        for(int j=0;j<n;j++){
//            if(ele==arr[j]){
//                cnt++;
               
//            }
//        }
//        if(cnt > n/2){
//            return ele;
//        }
//    }
//    return 0;
// }


//Better approach: TC: o(nlogn)+o(n) sc: o(n)

// int majorityElement(int arr[],int n){
//    map<int,int>mp;
   
//    for(int i=0;i<n;i++){
//        mp[arr[i]]++;
//    }
//    for(auto it:mp){
//        if(it.second > n/2){
//            return it.first;
//        }
//    }
//    return 0;
// }

// OPTIMAL APRROACH : MOORE'S VOTING ALGO TC: O(n)+ o(n) (this o(n) is added ony when problem state that array may contain not majority ele and if state there must be majority ele then we have o(2n) othewise o(n))

int majorityElement(int arr[],int n){
   int cnt=0;
   int ele;
   for(int i=0;i<n;i++){
       if(cnt==0){
           cnt=1;
           ele=arr[i];
       }else if(arr[i]==ele){
           cnt++;
       }else{
           cnt--;
       }
       
   }
   
   int mj=0;
  for(int i=0;i<n;i++){
      if(arr[i]==ele) mj++;
  }
  if(mj>n/2){
      return ele;
  }
  
  return 0;
}
int main() {
   int arr[7]={1,0,2,0,2,2,2};
   int ele = majorityElement(arr,7);
   cout<<"majority ele is: "<<ele;

    return 0;
}
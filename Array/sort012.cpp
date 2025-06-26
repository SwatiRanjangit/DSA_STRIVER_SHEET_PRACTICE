#include <bits/stdc++.h>
using namespace std;

//Brute approach TC: O(nlog(n)) TC: o(n) sc: O(n)
// void sortZeroOneTwo(int arr[],int n){
//    sort(arr,arr+n); 
// }

//Better TC: O(2N) sc: o(1)
// void sortZeroOneTwo(int arr[],int n){
//   int cnt0=0, cnt1=0,cnt2=0;
//   for(int i=0;i<n;i++){
//       if(arr[i]==0){
//           cnt0++;
//       }else if(arr[i]==1){
//           cnt1++;
//       }else{
//           cnt2++;
//       }
//   }
  
//   for(int i=0;i<cnt0;i++){
//       arr[i]=0;
//   }
//   for(int i=cnt0;i<cnt0+cnt1;i++){
//       arr[i]=1;
//   }
//   for(int i=cnt0+cnt1;i<n;i++){
//       arr[i]=2;
//   }
// }


//OPTIMAL (DUTCH NATIONAL FLAG ALGO) tc: o(n) sc: o(1)
void sortZeroOneTwo(int arr[],int n){
   int low=0,mid=0,high=n-1;
   while(mid<=high){
       if(arr[mid]==0){
           swap(arr[low],arr[mid]);
           low++;
           mid++;
       }else if(arr[mid]==1){
          mid++;
         
       }else if(arr[mid]==2){
            swap(arr[high],arr[mid]);
           high--;
       }
   }
}

int main() {
   int arr[5]={1,0,2,0,1};
   sortZeroOneTwo(arr,5);
   for(int i=0;i<5;i++){
       cout<<arr[i]<<" ";
   }

    return 0;
}
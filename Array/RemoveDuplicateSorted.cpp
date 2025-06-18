#include <bits/stdc++.h>
using namespace std;
/*Brute force : using SET TC: n log(n) SC: LOG(N)*/ 
// int removeDuplicates(int arr[],int n){
//   set<int> s;
//   for(int i=0;i<n;i++){
//       s.insert(arr[i]);
//   }
//   int ind=0;
//   for(int val: s){
//       arr[ind++]=val;
//   }
//   return ind;
  
//  }
  

// int main(){
//     int n=7;
//    int arr[n]={1,2,2,4,5,6,6}; 
//    cout<<endl<<"Before removing the duplicates from sorted array: "<<endl;
//    for(int i=0;i<n;i++){
//        cout<<arr[i]<<" ";
//    }
//   int res= removeDuplicates(arr,n);
//    cout<<endl<<"After removing the duplicates from sorted array: "<<endl;
//    for(int i=0;i<res;i++){
//        cout<<arr[i]<<" ";
//    }
   
// }
/*Optimal*/
int removeDuplicates(int arr[],int n){
  int j=0;
  for(int i=1;i<n;i++){
      if(arr[j]!=arr[i]){
          j++;
          arr[j]=arr[i];
        }
  }
  return j+1;
  
 }
  

int main(){
    int n=7;
   int arr[n]={1,2,2,4,5,6,6}; 
   cout<<endl<<"Before removing the duplicates from sorted array: "<<endl;
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
   int res= removeDuplicates(arr,n);
   cout<<endl<<"After removing the duplicates from sorted array: "<<endl;
   for(int i=0;i<res;i++){
       cout<<arr[i]<<" ";
   }
   
}
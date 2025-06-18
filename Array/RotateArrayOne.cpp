/*BRUTE FORCE APPROACH*/
#include <bits/stdc++.h>
using namespace std;
// void rotateArrayByOne(int arr[],int n){
//  vector<int> v;
//  int ind=arr[0];
//  for(int i=1;i<n;i++){
//      v.push_back(arr[i]);
//  }
//  v.push_back(ind);
//  for(int val: v){
//      cout<<val<<" ";
//  }
  
//  }
  

 /*Optimal approach*/

 void rotateArrayByOne(int arr[], int n) {
    if (n <= 1) return;

    int first = arr[0];
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = first;
}
  

int main(){
    int n=5;
   int arr[n]={1,2,3,4,5}; 
   cout<<endl<<"Before Rotating the array: "<<endl;
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
   cout<<endl<<"After Rotating the array "<<endl;
   rotateArrayByOne(arr,n);
   

   
}

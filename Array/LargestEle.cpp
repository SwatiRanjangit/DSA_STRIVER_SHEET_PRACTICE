#include <bits/stdc++.h>
using namespace std;
int LargestEle(int arr[],int n){
  int max=-1;
  for(int i=0;i<n;i++){
      if(arr[i]>max){
          max=arr[i];
      }
  }
  return max; 
}
int main(){
   int arr[6]={3,4,5,34,96,9}; 
  int res = LargestEle(arr,6);
  cout<<"Largest element in the array: "<<res;
   
}
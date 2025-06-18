#include <bits/stdc++.h>
using namespace std;

/* Burte force approach*/
/*
bool CheckArray(int arr[],int n){
  for(int i=0;i<n;i++){
      int ele=i;
      for(int j=i;j<n;j++){
          if(arr[ele]>arr[j]){
              return false;
          }
      }
  }
  
  return true;
}
*/

/*Optimal approach */
bool CheckArray(int arr[],int n){
  for(int i=1;i<n;i++){
      if(arr[i]<arr[i-1]){
          return false;
      }
  }
  return true;
 }

int main(){
   int arr[6]={1,2,13,4,5,6}; 
   if(CheckArray(arr,6)){
       cout<<"array is sorted."<<endl;
   }else{
       cout<<"array is not sorted."<<endl;
   }
   
}
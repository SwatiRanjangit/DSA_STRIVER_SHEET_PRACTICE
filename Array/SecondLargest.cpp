#include <bits/stdc++.h>
using namespace std;
int LargestEle(int arr[],int n){
  int secondLargest=-1;
  int max=-1;
  for(int i=0;i<n;i++){
      if(arr[i]>max){
         secondLargest=max;
         max=arr[i];
          
      }else if (arr[i] != max && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
  }
  return (secondLargest == INT_MIN) ? -1 : secondLargest;
}
int main(){
   int arr[6]={3,4,5,34,9,9}; 
  int res = LargestEle(arr,6);
  cout<<"Largest element in the array: "<<res;
   
}
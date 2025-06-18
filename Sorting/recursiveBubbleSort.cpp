#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
    
   if(n==1) return;
   
   for(int j=0;j<=n-2;j++){
       if(arr[j]>arr[j+1]){
           swap(arr[j],arr[j+1]);
       }
   }
   
   bubbleSort(arr,n-1);
   
}
int main(){

    int arr[6]={3,4,5,34,1,9}; 
    bubbleSort(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

}

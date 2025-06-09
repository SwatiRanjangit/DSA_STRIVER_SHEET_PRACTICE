#include <bits/stdc++.h>
using namespace std;
void selectionSort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if(arr[mini]>arr[j]){
                mini=j;
            }
        }
        swap(arr[mini],arr[i]);
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
   int arr[6]={3,4,5,34,1,9}; 
   selectionSort(arr,6);
}
#include <bits/stdc++.h>
using namespace std;
void InsertionSort(int arr[],int i,int n){
    if(i==n) return;
    int j=i;   
    while(j>0 && arr[j-1]>arr[j]){
       swap(arr[j-1],arr[j]);
            j--;
    }
    InsertionSort(arr,i+1,n);
}
int main(){
   int arr[6]={3,4,5,34,1,9}; 
   InsertionSort(arr,1,6);
   for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}
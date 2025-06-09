#include <bits/stdc++.h>
using namespace std;

/*
| Sorting Algorithm  | Best Case            | Average Case | Worst Case | Space Complexity | Stable? |
| ------------------ | -------------------- | ------------ | ---------- | ---------------- | ------- |
| **Bubble Sort**    | O(n) ✅ *(optimized)* | O(n²)        | O(n²)      | O(1)             | Yes ✅   |
| **Selection Sort** | O(n²)                | O(n²)        | O(n²)      | O(1)             | No ❌    |
| **Insertion Sort** | O(n) ✅ *(sorted)*    | O(n²)        | O(n²)      | O(1)             | Yes ✅   |
*/

void BubbleSort(int arr[],int n){
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<i;j++){
           if(arr[j]>arr[j+1]){
               swap(arr[j],arr[j+1]);
           }
        }
        
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
   int arr[6]={3,4,5,34,1,9}; 
   BubbleSort(arr,6);
}
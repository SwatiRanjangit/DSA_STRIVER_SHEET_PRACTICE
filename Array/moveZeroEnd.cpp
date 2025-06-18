// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

/*Brute force approach TC: O(2n) SC: O(N)*/
// void moveZeroes(int arr[],int n){
//    for(int i=0;i<n;i++){
//       if(arr[i] != 0){
//          temp.push_back(arr[i]);
//       }
      
//    }
//    for(int i=0;i<temp.size();i++){
//        arr[i]=temp[i];
//    }
//    int s=temp.size();
//    for(int i=s;i<n;i++){
//        arr[i]=0;
//    }
// }
    
/*OPTIMAL sol TC: O(n)*/

void moveZeroes(int arr[],int n){
   int j = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
}


int main() {
    int n=7;
    int arr[n]={1,2,0,4,0,6,0};
    moveZeroes(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
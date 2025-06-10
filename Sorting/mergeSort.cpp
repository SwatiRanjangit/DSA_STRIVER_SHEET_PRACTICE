// Online C++ compiler to run C++ program online
//TC: O(n log n)
#include <bits/stdc++.h>
using namespace std;
void merge(int arr[],int low, int mid, int high){
    vector<int>v;
    int left=low;
    int right=mid+1;
    
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            v.push_back(arr[left]);
            left++;
        }else{
            v.push_back(arr[right]);
            right++;
        }
    }
     while (left <= mid) {
        v.push_back(arr[left]);
        left++;
    }

    // Push remaining elements from right half
    while (right <= high) {
        v.push_back(arr[right]);
        right++;
    }
    
    for (int i = 0; i < v.size(); i++) {
        arr[low + i] = v[i];
    }
}
void mergeSort(int arr[],int low,int high){
    if(low>=high) return;
    
    int mid = (low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    
    merge(arr,low,mid,high);
}
int main() {
    int arr[6]={5,3,5,2,1,6};
    int n=6;
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
 #include <bits/stdc++.h>
using namespace std;

int findPivot(int arr[], int low,int high){
    int pivot = arr[low];
    int i=low; 
    int j=high;
    while(i<j){
        while(arr[i]<=pivot && i<high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
        swap(arr[j],arr[low]);
    }
    return j;

}

void quickSort(int arr[], int low, int high){
    if(low<high){
        int pv = findPivot(arr,low,high);
        quickSort(arr,low,pv);
        quickSort(arr,pv+1,high);
    }
     
}

int main(){
   int arr[6]={5,3,5,2,1,6};
    int n=6;
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
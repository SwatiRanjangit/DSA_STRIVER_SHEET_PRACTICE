// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

/*Brute force approach*/
// void KrotateArray(int arr[],int n,int d){
//     int v[n];
//      d = d % n;
//     for(int i=0;i<d;i++){
//         v[i]=arr[i];
//     }
//     for(int i=d;i<n;i++){
//         arr[i-d]=arr[i];
//     }
//     int p=0;
//     for(int j=n-d;j<n;j++){
//         arr[j]=v[p];
//         p++;
//     }
    
// }

/*Better force approach(Maths) TC: O(N+D) TC: O(D)*/
// void KrotateArray(int arr[],int n,int d){
//     int v[n];
//      d = d % n;
//     for(int i=0;i<d;i++){
//         v[i]=arr[i];
//     }
//     for(int i=d;i<n;i++){
//         arr[i-d]=arr[i];
//     }
    
//     for(int j=n-d;j<n;j++){
//         arr[j]=v[j-(n-d)];
//     }
    
// }
/*OPTIMAL approach(Maths) TC: O(2N) SC: O(1)*/

void reverse(int arr[], int start, int end){
    while(start<=end){
        int temp;
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

void KrotateArray(int arr[],int n,int d){
    d = d %n;
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr,0,n-1);
    
}

int main() {
    int n=6;
    int arr[n]={1,2,3,4,5,6};
    int d=3;
    KrotateArray(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
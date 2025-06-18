// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<vector>
using namespace std;
// BRUTE FORCE 
// void InterSectionArray(int arr1[],int arr2[],int n,int m){
//    vector<int> v;
//    vector<bool> visited(m,false);
//    for(int i=0;i<n;i++){
//        for(int j=0;j<m;j++){
//            if(arr1[i]==arr2[j]){
//                v.push_back(arr1[i]);
//                visited[j]=true;
//                break;
//            }
//        }
//    }
   
//    for(auto it:v){
//        cout<<it<<" ";
//    }
// }


void InterSectionArray(int arr1[],int arr2[],int n,int m){
   vector<int> v;
   int i=0,j=0;
   while(i<n && j<m){
       if(arr1[i]==arr2[j]){
           v.push_back(arr1[i]);
           i++;
           j++;
       }else if(arr1[i]<arr2[j]){
           i++;
       }else{
           j++;
       }
   }
   
   for(auto it:v){
       cout<<it<<" ";
   }
}
int main() {
    int n=4,m=3;
  int arr1[n]={1,2,4,6};
  int arr2[m]={1,1,6};
  InterSectionArray(arr1,arr2,n,m);

    return 0;
}
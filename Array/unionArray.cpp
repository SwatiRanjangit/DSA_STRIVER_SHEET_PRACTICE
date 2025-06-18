/*Brute force approach*/

// Online C++ compiler to run C++ program online
// Online C++ compiler to run C++ program online
//#include <bits/stdc++.h>
// #include<vector>
// using namespace std;
// void unionArray(int arr1[],int arr2[],int n,int m){
//     set<int>u;
//     for(int i=0;i<n;i++){
//         u.insert(arr1[i]);
//     }
    
//     for(int i=0;i<m;i++){
//        u.insert(arr2[i]);
//         }
  
    
//     for(int i: u){
//         cout<<i<<" ";
//     }
// }
// int main() {
//     int n=4,m=3;
//   int arr1[n]={1,2,4,5};
//   int arr2[m]={2,6,7};
//   unionArray(arr1,arr2,n,m);

//     return 0;
// }
/*TC: O(n1(logn) + n2(log n)) + o(n1+n2) SC: o(n1+n2)*/
#include <bits/stdc++.h>
#include<vector>
using namespace std;
// void unionArray(int arr1[],int arr2[],int n,int m){
//     set<int>u;
//     for(int i=0;i<n;i++){
//         u.insert(arr1[i]);
//     }
    
//     for(int i=0;i<m;i++){
//        u.insert(arr2[i]);
//         }
  
    
//     for(int i: u){
//         cout<<i<<" ";
//     }
// }

/*OPTIMAL FORCE(two pointers) TC: O(N1+N2) SC: O(N1+N2)*/
void unionArray(int arr1[],int arr2[],int n,int m){
   vector<int>v;
   int i=0,j=0;
   
   while(i<n && j<m){
       if(arr1[i]<arr2[j]){
           if(v.size()==0 || v.back() != arr1[i]){
               v.push_back(arr1[i]);
               
           }
           i++;
       }else{
           if(v.size()==0 || v.back()!=arr2[j]){
               v.push_back(arr2[j]);
           }
           j++;
       }
   }
   
   while(j<m){
     if(v.size()==0 || v.back()!=arr2[j]){
               v.push_back(arr2[j]);
           }
           j++;  
   }
   while(i<n){
        if(v.size()==0 || v.back() != arr1[i]){
               v.push_back(arr1[i]);
               
           }
           i++;
   }
   for(int it:v){
       cout<<it<<" ";
   }
}

int main() {
    int n=4,m=3;
  int arr1[n]={1,2,4,5};
  int arr2[m]={2,6,7};
  unionArray(arr1,arr2,n,m);

    return 0;
}
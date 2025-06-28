// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
//BRUTE FORCE TC: O(2N) SC: O(N)
// void rearrangeArray(int arr[],int n){
//    vector<int> pos;
//    vector<int> neg;
//    for(int i=0;i<n;i++){
//        if(arr[i]>0){
//            pos.push_back(arr[i]);
//        }else{
//            neg.push_back(arr[i]);
//        }
//    }
   
//    int k=0,l=0;
  
//    for(int i =0;i<n;i++){
//        if(i%2==0){
//            arr[i]=pos[k];
//            k++;
//        }else{
//            arr[i]=neg[l];
//            l++;
//        }
//    }
    

// }


//OPTIMAL TC: O(N) sc: o(n)
void rearrangeArray(int arr[],int n){
   vector<int> v(n,0);
   int posInd=0, negInd=1;
   for(int i=0;i<n;i++){
       if(arr[i]>0){
           v[posInd]=arr[i];
           posInd+=2;
       }else{
          v[negInd]=arr[i];
          negInd+=2;
       }
   }
   for(int i=0;i<v.size();i++){
       arr[i]=v[i];
   }
    

}
int main() {
    int n=6;
    int arr[n]={1, -1, -3, -4, 2, 3};
    rearrangeArray(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   

    return 0;
}
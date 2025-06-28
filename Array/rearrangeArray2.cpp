// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
//IF POS AND NEG count is not same then remaining just add at the end without any order.
//TC: O(2N) SC: O(N)
void rearrangeArray(int arr[],int n){
  vector<int>pos;
  vector<int>neg;
  
  for(int i=0;i<n;i++){
      if(arr[i]>0){
         pos.push_back(arr[i]);
      }else{
          neg.push_back(arr[i]);
      }
  }
  
  if(pos.size()>neg.size()){
      for(int i=0;i<neg.size();i++){
          arr[i*2]=pos[i];
          arr[i*2+1]=neg[i];
      }
      int ind = 2* neg.size();
      for(int i=neg.size();i<pos.size();i++){
          arr[ind]=pos[i];
          ind++;
      }
      
  }else{
      for(int i=0;i<pos.size();i++){
          arr[i*2]=pos[i];
          arr[i*2+1]=neg[i];
          
      }
      int ind= 2 * pos.size();
      for(int i=pos.size();i<neg.size();i++){
          arr[ind]=neg[i];
          ind++;
      }
  }
  
}
int main() {
    int n=8;
    int arr[n]={1, -1, -3, -4, 2, 3,4,5};
    rearrangeArray(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   

    return 0;
}
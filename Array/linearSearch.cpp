// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;


bool linearSearch(int arr[],int n,int k){
   for(int i=0;i<n;i++)
   {
       if(arr[i]==k){
           return true;
       }
   }
   return false;
}
    


int main() {
    int n=7;
    int arr[n]={1,2,0,4,0,6,0};
    bool res=linearSearch(arr,n,8);
    if(res){
        cout<<"element found"<<endl;
    }else{
        cout<<"element not found"<<endl;
    }
    

    return 0;
}
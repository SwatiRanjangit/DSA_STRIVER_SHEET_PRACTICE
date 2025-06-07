#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[6]={1,2,1,2,3,4};

    int hash[13]={0};
    for(int i=0;i<6;i++){
        hash[arr[i]]+=1;
    }

    int q;
    cout<<"enter the value of q: "<<endl;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout<<hash[num]<<endl;

    }
}
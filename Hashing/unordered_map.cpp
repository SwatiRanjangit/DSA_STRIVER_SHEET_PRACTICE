#include<bits/stdc++.h>
using namespace std;

int main(){
    // TC: O(LOG(N))
    int arr[6]={1,2,3,4,2,1};
    map<int,int> mp;

    for(int i=0;i<6;i++){
        mp[arr[i]]++;
    }

    for(auto it: mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
}
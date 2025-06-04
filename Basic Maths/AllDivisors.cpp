#include <bits/stdc++.h>
using namespace std;

int main(){
    //TC: O(sqrt(n))
    int n=36;
    vector<int>l;
    for(int i=1; i * i <=n;i++){
        if(n%i==0){
            l.push_back(i);
            if(i != n/i){
                l.push_back(n/i);
            }
        }
    }

    sort(l.begin(),l.end()); // TC: N(LOG(N))
    for(auto it: l){
        cout<<it<<" ";
    }

}
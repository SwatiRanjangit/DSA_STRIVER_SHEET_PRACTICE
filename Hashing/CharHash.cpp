#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="swaatis";

    int hash[256]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]+=1;
    }

    int q;
    cout<<"enter the value of q: "<<endl;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c]<<endl;

    }
}
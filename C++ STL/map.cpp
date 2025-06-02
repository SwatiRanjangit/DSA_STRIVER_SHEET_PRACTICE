#include <iostream>
#include<map>
using namespace std;
int main(){
    // stores in key value pair and key should be unique in sorted ordered
    map<int,int>mp;
    map<int,pair<int,int>>mp1;
    map<pair<int,int>,int> mp2;

    mp[1]=2;
     mp.emplace(3, 4);
    mp.insert({5,6});

    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    auto it = mp.find(3);
    cout<<(*it).second; //or cout<<it->second;
    
}
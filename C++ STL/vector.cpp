#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2); // this is faster than push_back
    v.push_back(3);

    for(auto it: v){
        cout<<it<<" ";
    }
    v.erase(v.begin()+1);
    cout<<endl;
    cout<<"after deleting 2nd element: "<<endl;
    for(auto it: v){
        cout<<it<<" ";
    }


    vector<int>v1(2,100);
    v1.insert(v1.begin(),300);
    v1.insert(v1.begin()+1,400);

    for(auto it: v1){
        cout<<endl<<it<<" ";
    }

    vector<pair<int,int>> v2;
     v2.push_back({1,2});
    v2.emplace_back(2,4);

    for(auto it: v2){
        cout<<endl<<it.second<<" ";
    }


    return 0;    
}


#include <iostream>
using namespace std;
int main(){
     pair<int,int> p={1,2};
     cout<<p.first<<" "<<p.second<<endl;
     pair<int,pair<int,int>> p1{4,{5,6}};
     cout<<p1.first<<" "<<p1.second.second<<endl;
     pair<int,int>arr[]={{1,2},{3,4},{5,6}};
     cout<<endl;
     for(auto it: arr){
        cout<<it.first<<" "<<it.second<<endl;
     }

}
#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

bool comp(pair<int,int> p1,pair<int,int> p2){
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;
    // if both second elemnt is same
    if(p1.first>p2.first) return true;
    return false;
}
int main(){
    int n=5;
    int arr[5]={3,2,5,1,4};
    sort(arr,arr+n);
    for(auto it:arr){
        cout<<it<<endl;
    }
    sort(arr, arr+n, greater<int>()); // sorting in descending order
    vector<int> v;
    v.push_back(4);
     v.push_back(2);
      v.push_back(4);
       v.push_back(3);

    sort(v.begin(),v.end());

    pair<int,int> p[] ={{1,2},{2,1},{4,1}}; // result should be : (4,1),(2,1),(1,2)
    // sort it according to second element
    // if 2element is same then sort it according to first indesceding order
    int n1 = sizeof(p) / sizeof(p[0]);

    sort(p,p+n1,comp);
    cout<<endl<<"Pair in sorted: "<<endl;
    for(auto it:p){
        cout<<it.first<<" "<<it.second<<endl;
    }

    int m=7;
    int cnt= __builtin_popcount(m); // it will return no of one for binary of 7 have. for eg: for 7 = give 3

    string s="123";
    cout<<endl<<"Permutations of 123"<<endl;
    do{
        cout<<s<<endl;
    }while (next_permutation(s.begin(), s.end()));

    return 0;
}
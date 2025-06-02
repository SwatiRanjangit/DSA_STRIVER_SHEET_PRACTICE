#include <iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);

    auto st=s.find(2);
    int c = s.count(2);
    cout<<c<<endl;

    auto it1 = s.find(1);
    auto it2 = s.find(2);
    s.erase(it1,it2); //(start, end]
}
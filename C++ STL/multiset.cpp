#include <iostream>
#include<set>
using namespace std;
int main(){
    //stores multiple occournce
    multiset<int>m;
    m.insert(1);
    m.insert(1);
    m.insert(1);
    m.insert(2);
    m.insert(3);

    m.erase(1); // it will erase all occurences of 1s
    int cnt = m.count(1);

    m.erase(m.find(2));
    // m.erase(m.find(2),m.find(1) + 1);
    
}
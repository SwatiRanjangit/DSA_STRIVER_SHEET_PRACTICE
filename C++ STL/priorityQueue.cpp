#include <iostream>
#include<queue>
using namespace std;
int main(){
    //push = pop = log(n) and top log(1)
    priority_queue<int>p; // max heap
    p.push(1);
    p.push(2);
    p.push(3);
    p.push(4);

    cout<<p.top();
    p.pop();
    cout<<endl<<p.top();

     priority_queue<int,vector<int>,greater<int>>p1; // min heap
     p1.push(10);
     p1.push(2);
     p1.push(15);
     cout<<endl<<p1.top();
}
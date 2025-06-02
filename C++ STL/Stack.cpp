#include <iostream>
#include<stack>
using namespace std;
int main(){
    // push pop top : LIFO
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<s.top();
    s.pop();
    cout<<endl<<s.top();



}
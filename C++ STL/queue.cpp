#include <iostream>
#include<queue>
using namespace std;
int main(){
    // FIFO 
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(4);
    q.push(3);

    cout<<q.back();
    cout<<endl<<q.front();
    q.pop();
    cout<<endl<<q.front();

}
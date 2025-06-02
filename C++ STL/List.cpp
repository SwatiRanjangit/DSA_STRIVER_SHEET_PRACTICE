#include <iostream>
#include<list>
using namespace std;

int main(){
    //list is similar to vector but the diff is it allow front as well as back operation but in vector
    // only back is allowed hence there insert operation we do for front insertion which is costlier.
    // vector = singly list mentained || list = doubly list mentioned
    list<int>l;
    l.push_back(2);
    l.push_front(1);
    l.emplace_back(5);
    l.emplace_front(4);

    for(auto it:l)
    {
        cout<<it<<" ";
    }
}
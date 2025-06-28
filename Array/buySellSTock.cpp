// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
//TC: O(N) SC: O(1)
int stockBuySell(int arr[],int n){
    int mini=arr[0];
    int profit=0;
    for(int i=1;i<n;i++){
        int cost = arr[i]-mini;
        profit = max(profit,cost);
        mini = min(mini,arr[i]);
    }
    return profit;
    

}
int main() {
    int n=6;
    int arr[n]={10, 7, 5, 8, 11, 9};
    int res = stockBuySell(arr,n);
    cout<<"Best time to buy and sell stock and get profit: "<<res<<endl;
   

    return 0;
}
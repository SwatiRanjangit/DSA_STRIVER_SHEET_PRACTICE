#include <bits/stdc++.h>
using namespace std;
//BRUTE FORCE TC: O(N2)
// pair<int, int> twoSum(int arr[], int n, int k) {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             if (i == j) continue;
//             if (arr[i] + arr[j] == k) {
//                 return {i, j};
//             }
//         }
//     }
//     return {-1, -1};  // Return a sentinel value if no pair is found
// }


//BETTER APPROACH TC: O(N * LOG N) SC: O(N)


// pair<int, int> twoSum(int arr[], int n, int k) {
//     map<int,int>mp;
//     for (int i = 0; i < n; i++) {
//        int ele = arr[i];
//        int rem = k - ele;
       
//            if(mp.find(rem)!=mp.end()){
//              return {i,mp[rem]};   
//            }
//        mp[ele]=i;
       
//     }
//     return {-1, -1};  
// }

//OPTIMAL APPROACH tc: o(n)+o(nlog n)

pair<int, int> twoSum(int arr[], int n, int k) {
   sort(arr,arr+n);
   int left =0, right = n-1;
    while(left<right)
    {
        int sum = arr[left]+arr[right];
       if(sum==k){
           return {arr[left], arr[right]};
       }else if(sum<k){
           left++;
       }else{
           right--;
       }
       
    }
    return {-1, -1};  
}
int main() {
    int arr[6] = {10, 5, 2, 7, 1, 9};
    int k = 15;
    pair<int, int> res = twoSum(arr, 6, k);

    if (res.first == -1)
        cout << "No such pair found." << endl;
    else
        cout << "Two indices with sum " << k << " are: " << res.first << " and " << res.second << endl;

    return 0;
}

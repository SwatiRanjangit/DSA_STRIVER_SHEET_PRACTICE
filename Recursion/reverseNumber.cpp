// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;
//  void reverse(int arr[], int n){
       
//         if(n<=0) return;

//         cout<<arr[n-1]<<" ";
//         reverse(arr,n-1);
// }
int i=0;
void reverse(int arr[], int n) {
    if (i >= n / 2) return;

    swap(arr[i], arr[n - i - 1]);
    i++;
    reverse(arr, n);  // keep n the same, only i changes
}
int main() {
    
   int arr[6]= {1,2,3,4,5,6};
    reverse(arr,6);
    for (int j = 0; j < 6; j++) {
        cout << arr[j] << " ";
    }
    

    return 0;
}
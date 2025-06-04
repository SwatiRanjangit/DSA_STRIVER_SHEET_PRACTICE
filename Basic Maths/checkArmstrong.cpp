
#include <bits/stdc++.h>
using namespace std;

int number(int n, int digits){
    int sum = 0;
    while(n > 0){
        int digit = n % 10;
        sum += pow(digit, digits);
        n /= 10;
    }
    return sum;
}

bool isArmstrong(int n) {
    int digits = (n == 0) ? 1 : (int)log10(n) + 1;
    int res = number(n, digits);
    return res == n;
}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    if(isArmstrong(n)){
        cout << "Armstrong number" << endl;
    } else {
        cout << "Not an Armstrong number" << endl;
    }
}

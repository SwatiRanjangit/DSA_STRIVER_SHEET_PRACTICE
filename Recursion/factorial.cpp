// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int factorial(int N){
			//your code goes here
            int mul=1;
            if(N<=0) return 1;

           
            mul = N * factorial(N-1);
           
            return mul;
		}
int main() {
    int n=6;
    int res = factorial(n);
    cout<<"result is: "<<res;
    

    return 0;
}
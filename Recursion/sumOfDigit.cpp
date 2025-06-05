#include <iostream>
using namespace std;
int NnumbersSum(int N){
			//your code goes here
            int sum=0;
            if(N<=0) return 0;

           
            sum = N + NnumbersSum(N-1);
           
            return sum;
		}
int main() {
    int n=4;
    int res = NnumbersSum(n);
    cout<<"result is: "<<res;
    

    return 0;
}
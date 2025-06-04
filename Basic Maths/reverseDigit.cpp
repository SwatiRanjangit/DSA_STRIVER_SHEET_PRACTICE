#include <iostream>

using namespace std;

int main(){
    int num=123;
    
    int rev=0;


    while(num>0){
       int digit= num %10;
       rev= rev * 10+digit;
       num /=10; 
    }
    cout<<"reversed of the number is: "<<rev;

}
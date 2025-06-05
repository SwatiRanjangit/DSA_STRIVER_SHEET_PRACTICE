// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;
int i=0;
 bool palindromeCheck(string& s){
     int n=s.size();
		if(i >= n/2) return true;
		if(s[i] != s[n-i-1]) return false;
		i++;
		return palindromeCheck(s);

            
}
int main() {
    string s="MOOM";
   
    cout << (palindromeCSheck(s) ? "Palindrome" : "Not Palindrome");
    

    return 0;
}
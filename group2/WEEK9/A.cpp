#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s){
    for(int i = 0; i < s.size() / 2; i++){
        if(s[i] != s[s.size() - 1 - i])
            return false;
    }
    return true;
}

int main(){
    string s;
    cin >> s;
    if(isPalindrome(s) == true)
        cout << "YES";
    else    
        cout << "NO";
    return 0;
}
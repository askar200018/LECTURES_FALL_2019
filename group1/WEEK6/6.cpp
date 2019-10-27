#include <iostream>
using namespace std;

bool isPalindrome(string s, int index){
    if(index == s.size() / 2)
        return true;
    if(s[index] != s[s.size() - 1 - index])
        return false;
    return isPalindrome(s, index + 1);
}

int main(){
    string s;
    cin >> s;
    if(isPalindrome(s, 0))
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}
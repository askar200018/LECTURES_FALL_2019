#include <iostream>
using namespace std;

int sumOfDigits(string s, int i){
    if(i == s.size())
        return 0;
    return sumOfDigits(s, i + 1) + (s[i] - 48);
}

int main(){
    string s;
    cin >> s;
    cout << sumOfDigits(s, 0);
}
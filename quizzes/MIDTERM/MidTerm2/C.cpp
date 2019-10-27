#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size();
    for(int i = 0; i < n / 2; i++){
        if(s[i] != s[n - i - 1]){
            cout << "NotPalindrome";
            return 0;
        }
    }
    if(n % 2 == 0)
        cout << "GoodPalindrome";
    else 
        cout << "NotGoodPalindrome";
    return 0;
}
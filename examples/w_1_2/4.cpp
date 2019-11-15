#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    string s2 = s;
    reverse(s2.begin(), s2.end());
    if(s2 == s)
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}
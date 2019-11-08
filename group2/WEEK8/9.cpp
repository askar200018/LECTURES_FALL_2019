#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

string removeVowels(string s){
    string res = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'U')
            res += s[i];
    }
    return res;
}

int main(){
    freopen("input.txt", "r", stdin);
    string s;
    string res = "";
    while(cin >> s){
        res += s + " ";
    }
    cout << removeVowels(res);
    return 0;
}
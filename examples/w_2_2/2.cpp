#include <iostream>
using namespace std;

bool check[500500];

string removeVowels(string s){
    string res = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] != 'a' && s[i] != 'i' && s[i] != 'e'){
            res += s[i];
        }
    }
    return res;
}

int main(){
    string s, res = "";
    while(cin >> s){
        res += s + " ";
    }
    cout << removeVowels(res);
}
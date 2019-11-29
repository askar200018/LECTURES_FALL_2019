#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isCaptain(string s){
    int index = 0;
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '@'){
            index = i;
            break;
        }
        if(s[i] < 'a' || s[i] > 'z')
            return false;
        cnt++;
    }
    if(cnt == 0)
        return false;
    cnt = 0;
    int index2 = 0;
    for(int i = index + 1; i < s.size(); i++){
        if(s[i] == '.'){
            index2 = i;
            break;
        } 
        if(s[i] < 'a' || s[i] > 'z')
            return false;
        cnt++;
    }
    if(cnt == 0)
        return false;
    cnt = 0;
    for(int i = index2 + 1; i < s.size(); i++){
        if(s[i] < 'a' || s[i] > 'z')
            return false;
        cnt++;
    }
    if(cnt == 0)
        return false;
    cnt = 0;
    return true;
}

int main(){
    string s;
    cin >> s;
    if(isCaptain(s) == true)
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}
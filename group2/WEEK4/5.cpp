#include <iostream>
#include <string>
using namespace std;

bool isCorrect(string s){
    if(s.size() < 8)
        return false;
    bool check = false;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z')
            check = true;
    }
    if(check == false)
        return false;
    check = false;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z')
            check = true;
    }
    if(check == false)
        return false;
    check = false;
    for(int i = 0; i <s.size(); i++){
        if(s[i] >= '0' && s[i] <= '9')
            check = true;
    }
    if(check == false)
        return false;
    return true;
}

int main(){
    string s;
    cin >> s;
    if(isCorrect(s) == true){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}
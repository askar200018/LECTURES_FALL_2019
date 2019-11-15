#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin >> s;
    bool check = false;
    for(int i = 0; i < s.size() - 1; i++){
        if(s[i] == '1' && s[i + 1] == '1'){
            cout << 0;
            i += 1;
        }else 
            cout << s[i];

    }
    if(s[s.size() - 1] == '0' || s[s.size() - 2] == '0')
        cout << s[s.size() - 1];

    return 0;
}
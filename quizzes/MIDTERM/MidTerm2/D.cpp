#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int l, r;
    cin >> s;
    cin >> l >> r;
    for(int i = 0; i < s.size(); i++){
        if(i + 1 >= l && i + 1 <= r){
            char c = s[i] + 32;
            cout << c;
        }
        else 
            cout << s[i];
    }
    return 0;
}
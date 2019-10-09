#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'z')
            cout << "a";
        else{
            char c = s[i] + 1;
            cout << c;
        }
    }
    return 0;
}

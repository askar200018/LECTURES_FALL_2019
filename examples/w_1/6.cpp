#include <iostream>
#include <string>
using namespace std;

int cnt[1000];

int main(){
    string s, t;
    cin >> s ;
    for(int i = 0; i < s.size(); i++)
        cnt[s[i]]++;
    for(char c = 'a'; c <= 'z'; c++){
        if(cnt[c] > 0)
            cout << c << " " << cnt[c] << endl;
    }
    return 0;
}
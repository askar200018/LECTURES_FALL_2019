#include <iostream>
#include <map>
#include <deque>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, int> mp;
    for(int i = 1; i <= n; i++){
        string s;
        cin >> s;
        if(mp[s] == 0)
            mp[s] = i;
    }
    for(auto it = mp.begin(); it != mp.end(); it++){
        cout << it -> first << " " << it -> second << endl;
    }
    return 0;
}
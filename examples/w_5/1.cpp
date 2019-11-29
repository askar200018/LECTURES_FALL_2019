#include <iostream>
#include <map>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<char, int> mp;
    for(int i = 0; i < n; i++){
        char c;
        cin >> c;
        mp[c] = mp[c] + 1;
    }
    // map<char, int>::iterator it;
    // for(it = mp.begin(); it != mp.end(); it++){
    //     cout << it -> first << " " << (*it).second << endl;
    // }
    for(auto it = mp.begin(); it != mp.end(); it++){
        cout << it -> first << " " << (*it).second << endl;
    }
    return 0;
}
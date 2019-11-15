#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    // freopen("input.txt", "r", stdin);
    map<string, string> mp;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string country, city;
        cin >> country >> city;
        mp[city] = country;
    }
    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        string s;
        cin >> s;
        cout << mp[s] << endl;
    }
}
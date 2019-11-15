#include <iostream>
#include <map>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    map<string, int> mp;
    string s;
    while(cin >> s){
        mp[s]++;
    }
    map<string,int>::iterator it;
    for(it = mp.begin(); it != mp.end(); it++){
        if(it -> second >= 2)
            cout << it -> first << endl;
    }
    return 0;
}
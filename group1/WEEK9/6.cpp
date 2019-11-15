#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    int n;
    cin >> n;
    int maxi = 0, mini = 10000000;
    map<string, int> mp;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(s.size() > maxi)
            maxi = s.size();
        if(s.size() < mini)
            mini = s.size();
        mp[s]++;
    }
    int cntMaxi = 0, cntMini = 0;
    map<string, int>::iterator it;
    for(it = mp.begin(); it != mp.end(); it++){
        string temp = it->first;
        if(temp.size() == maxi && mp[temp] > cntMaxi)
            cntMaxi = mp[temp];
        if(temp.size() == mini && mp[temp] > cntMini)
            cntMini = mp[temp];
    }
    if(cntMini >= cntMaxi)
        cout << "My type";
    else 
        cout << "Not my type";
    return 0;
}
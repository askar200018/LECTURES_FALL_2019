#include <iostream>
#include <map>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        mp[y - x]++;
    }
    int maxi = 0;
    map<int,int>::iterator it;
    for(it = mp.begin(); it != mp.end(); it++){
        if(it -> second > maxi)
            maxi = it -> second;
    }
    cout << maxi << endl;
    return 0;
}
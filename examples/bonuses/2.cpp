#include <iostream>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int n;
    map<int, pair<int,int>> mp;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        mp[i] = make_pair(x, y);
    }
    double sum = 0;
    for(int i = 0; i < n - 1; i++){
        double x1 = mp[i].first;
            double y1 = mp[i].second;
            double x2 = mp[i + 1].first;
            double y2 = mp[i + 1].second;
            sum += sqrt((x2 - x1) * (x2 - x1) + (y2 - y1)*(y2 - y1));
    }
    double fact = 1;
    for(int i = 0; i < n; i++){
        fact *= (i + 1);
    }
    cout << fact << endl;
    cout << sum << endl;
    return 0;
}

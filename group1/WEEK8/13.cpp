#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <vector>
#include <set>
using namespace std;

int main(){
    vector<int> v;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin  >> x;
        v.push_back(x);
    }
    int k;
    cin >> k;
    sort(v.begin(), v.end());
    for(int i = 0; i < k; i++)
        cout << v[i] << " ";
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    int k;
    cin >> k;
    sort(v.begin(), v.end());
    for(int i = 0; i < k; i++){
        cout << v[i] << " ";
    }
    return 0;
}
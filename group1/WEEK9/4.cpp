#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    int q, l, r;
    cin >> q;
    cin >> l >> r;
    v.erase(v.begin() + q - 1);
    v.erase(v.begin() + l - 1, v.begin() + r);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}
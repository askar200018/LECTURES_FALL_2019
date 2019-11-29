#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

bool isPrime(int x){
    if(x == 1)
        return false;
    for(int i = 2; i * i <= x; i++){
        if(x % i == 0)
            return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    int k, cnt = 0;
    cin >> k;
    for(int i = 0; i < v.size(); i++){
        if(isPrime(v[i]) && v[i] > k)
            cnt++;
    }
    cout << cnt;
    return 0;
}
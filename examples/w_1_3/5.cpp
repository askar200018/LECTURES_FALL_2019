#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
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
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int k;
    cin >> k;
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    int sum = 0;
    for(int i = 0; i < k; i++){
        sum += v[i];
    }
    cout << sum; 
    return 0;
}
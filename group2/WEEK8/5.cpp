#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPrime(int x){
    if(x == 0)
        return false;
    if(x == 1)
        return false;
    for(int i = 2; i * i  <= x ; i++){
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
    int k;
    cin >> k;
    int cnt = 0; 
    for(int i = 0; i < v.size(); i++){
        if(isPrime(v[i]) == true && v[i] > k)
            cnt++;
    }
    cout << cnt;
    return 0;
}
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int sum = 0;
    int maxi = -1e9;
    for(int i = 0; i < n; i++){
        sum += a[i];
        maxi = max(maxi, a[i]);
    }
    if(sum - maxi > maxi)
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int sum[26];

int main(){
    int n;
    cin >> n;
    char a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum[a[i]] = sum[a[i]] + 1;
    }
    for(char c = 'a'; c != 'z' + 1; c++){
        if(sum[c] > 0){
            cout << c << " " << sum[c] << endl;
        }
    }

    return 0;
}
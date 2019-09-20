#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    // for(int i = 0; i < n; i++){
    //     int x;
    //     cin >> x;
    //     if(x % 2 != 0){
    //         cout << x << " ";
    //     }
    // }
    int a[n];
    for(int i = 0; i < n;i++){
        cin >> a[i];
    }
    // for(int i = 0;i < n;i++){
    //     cout << a[i] << " ";
    // }
    for(int i = 0; i < n; i++){
        if(a[i] % 2 != 0){
            cout << a[i] << " ";
        }
    }
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int maxi = -1e9;
    for(int i = 0; i < n; i++){
        if(a[i] > maxi)
            maxi = a[i];
    }
    for(int i = 0; i < n; i++){
        if(maxi == a[i])
            cout << 1 << " ";
        else    
            cout << 0 << " ";
    }
    return 0;
}
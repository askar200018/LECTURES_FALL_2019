#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int maxi = -1e9, mini = 1e9;
    for(int i = 0; i < n; i++){
        if(a[i] > maxi)
            maxi = a[i];
        if(a[i] < mini)
            mini = a[i];
    }
    cout << mini << " " << maxi;
    return 0;
}
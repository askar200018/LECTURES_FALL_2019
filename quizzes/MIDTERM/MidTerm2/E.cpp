#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
        cin >> b[i];
    int maxi = -1e9;
    for(int i = 0; i < n; i++){
        int diff = a[i] - b[i];
        if(maxi < diff)
            maxi = diff;
    }
    cout << maxi;
    return 0;
}
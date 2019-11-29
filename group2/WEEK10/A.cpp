#include <iostream>
using namespace std;

int counter(int a[], int l, int r){
    int maxi = a[l];
    int cnt = 1;
    for(int i = l + 1; i <= r; i++){
        if(a[i] > maxi){
            cnt++;
            maxi = a[i];
        }
    }
    return cnt;
}

int main(){
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int l, r;
        cin >> l >> r;
        cout << counter(a, l, r) << endl;
    }
    return 0;
}
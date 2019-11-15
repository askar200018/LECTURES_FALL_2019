#include <iostream>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++){
        for(int j = i + 1; i < n; j++){
            if(a[i] + a[j] == k){
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}
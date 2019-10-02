#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int mini = 1e9;
    for(int i = 0; i < n; i++){
        if(a[i] < mini && a[i] > 0){
            mini = a[i];
        }
    }
    cout << mini;
    return 0;
}
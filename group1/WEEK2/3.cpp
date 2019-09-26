#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int mini = a[0];
    for(int i = 1; i < n; i++){
        if(mini > a[i] && a[i] >= 0){
            mini = a[i];
        }
    }
    cout << mini;
    return 0;
}
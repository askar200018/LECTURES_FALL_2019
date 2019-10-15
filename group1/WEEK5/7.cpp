#include <iostream>
#include <cmath>
using namespace std;


int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int tempSum = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == 1){
            tempSum++;
        }
        else if (tempSum > 0){
            cnt++;
            tempSum = 0;
        }
    }
    cout << cnt;
    return 0;
}
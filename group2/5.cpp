#include <iostream>
#include <cmath>

using namespace std;

int main(){
    // 5
    // 100 1002 102 320 23
    int n;
    int cnt = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        while(x > 0){
            if(x % 10 == 0){
                cnt++;
            }
            x = x / 10;
        }
    }
    cout << cnt;
    return 0;
}
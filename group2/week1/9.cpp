#include <iostream>
#include <cmath>

using namespace std;
// 1297 7 
int main(){
    int n;
    cin >> n;
    int cnt = 0;
    for(int i = 0; i < n; i = i + 1){
        int x;
        cin >> x;
        if(x % 10 == 7){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
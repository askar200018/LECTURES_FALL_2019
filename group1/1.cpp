#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    int cnt = 0;
    for(int i = 0; i < n; i = i + 1){
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
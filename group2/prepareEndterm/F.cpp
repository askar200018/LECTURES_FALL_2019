#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a, b, k;
    cin >> a >> b >> k;
    int cnt = 0;
    int mini = min(a, b);
    for(int i = mini; i >= 1; i--){
        if(a % i == 0 && b % i == 0){
            cnt++;
            if(cnt == k){
                cout << i;
                return 0;
            }
        }
    }
    return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    int cnt = 0;
    cin >>n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x % 10 == 7){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
#include <iostream>

using namespace std;

int main(){
    int n;
    int cnt = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        bool check = true;
        if(x == 1){
            check = false;
        }
        for(int j = 2; j < x; j++){
            if(x % j == 0){
                check = false;
                break;
            }
        }
        if(check == true){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
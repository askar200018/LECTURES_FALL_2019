#include <iostream>
using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        bool check = false;
        for(int j = 0; j < m; j++){
            int x;
            cin >> x;
            if(x == k)
                check = true;
        }
        if(check == true)
            cnt++;
    }
    cout << cnt;
    return 0;
}
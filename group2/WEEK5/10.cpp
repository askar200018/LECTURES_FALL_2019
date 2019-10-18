#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    for(int i = 0;i < 8; i++){
        int ost1 = n % 2;
        int ost2 = m % 2;
        if(ost1 != ost2)
            cnt++;
        n = n / 2;
        m /= 2;
    }
    cout << cnt;
    return 0;
}
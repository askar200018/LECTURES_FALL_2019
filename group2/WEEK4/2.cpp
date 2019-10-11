#include <iostream>
using namespace std;


int main(){
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    for(int i = 0; i < 8; i++){
        int ost1 = a % 2;
        int ost2 = b % 2;
        if(ost1 != ost2){
            cnt++;
        }
        a = a / 2;
        b = b / 2;
    }
    cout << cnt;
    return 0;
}
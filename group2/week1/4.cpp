#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int x;
    int cnt = 0;
    cin >> x;
    while (x > 0)
    {   
        if(x % 10 == 0){
            cnt = cnt + 1;
        }
        x = x / 10;
    }
    cout << cnt;
    
    return 0;
}
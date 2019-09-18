#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    int num = 0;
    if(n % 2 == 1){
        num = num + 8;
    }
    n = n / 2;
    if(n % 2 == 1){
        num = num + 4;
    }
    n = n / 2;
    if(n % 2 == 1){
        num = num + 2;
    }
    n  = n / 2;
    if(n % 2 == 1){
        num = num + 1;
    }
    cout << num;
    return 0;
}
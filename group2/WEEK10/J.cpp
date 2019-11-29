#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int toSeven(int a){
    int res = 0;
    int k = 1;
    while(a > 0){
        res += (a % 7) * k;
        a /= 7;
        k *= 10;
    }
    return res;
}


int main(){
    int n;
    cin >> n;
    cout << toSeven(n);
    return 0;
}
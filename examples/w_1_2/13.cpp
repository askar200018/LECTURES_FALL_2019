#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int fact(int n){
    if(n == 0)
        return 1;
    if(n == 1)
        return 1;
    return n * fact(n - 1);
}

int main(){
    int x;
    cin >> x;
    cout << fact(x);
    return 0;
}
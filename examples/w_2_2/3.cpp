#include <iostream>
using namespace std;

int degree(int n){
    if(n == 1)
        return 2;
    if(n == 0)
        return 1;
    return degree(n - 1) * 2;
}

int main(){
    int n;
    cin >> n;
    cout << degree(n);
}
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int x){
    if(x == 0 || x == 1)
        return false;
    for(int i = 2; i <= sqrt(x); i++){
        if(x % i == 0)
            return false;
    }
    return true;
}

void showPrimes(int* a, int n){
    for(int i = 0; i < n; i++){
        if(isPrime(a[i]) == true){
            cout << a[i] << " ";
        }
    }
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    showPrimes(a, n);
    return 0;
}
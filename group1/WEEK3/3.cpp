#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool isPrime(int x){
    if(x == 1 || x == 0)
        return false;
    for(int i = 2; i <= sqrt(x); i++){
        if(x % i == 0)
            return false;
    }
    return true;
}

int main(){
    int x;
    cin >> x;
    if(isPrime(x) == true)
        cout << "IS PRIME";
    else 
        cout << "IS NOT PRIME";
    return 0;
}
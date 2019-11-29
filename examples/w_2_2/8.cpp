#include <iostream>
using namespace std;

int heater(int n){
    if(n == 0)
        return 0;
    return heater(n / 10) + (n % 10) / 2;
}

int main(){
    int n;
    cin >> n;
    cout << heater(n);
}
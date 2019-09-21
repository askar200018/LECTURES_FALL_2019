#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int x;
    int sum = 0;
    cin >> x;
    while(x > 0){
        int temp;
        temp = x % 10;
        sum = sum + temp;
        x = x / 10;
    } 
    cout << sum;
    return 0;
}
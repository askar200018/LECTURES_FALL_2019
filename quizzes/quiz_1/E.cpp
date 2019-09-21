#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int minim = 0;
    if(a >= b){
        minim = b;
    }else
    {
        minim = a;
    }
    int number ;
    for(int i = minim; i >= 1; i--){
        if(a % i == 0 && b % i == 0){
            number = i;
            break;
        }
    }
    cout << number;
    return 0;
}
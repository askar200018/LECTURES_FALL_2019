#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x;
    for(int i = 0; i < n; i++){
        x = pow(2,i);
        if( x > n){
            break;
        }
        cout << pow(2, i) << " ";
    }
    return 0;
}
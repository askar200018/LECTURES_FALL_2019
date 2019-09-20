#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    int maxi = -100000;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x > maxi){
            maxi = x;
        }
    }
    cout << maxi;
    return 0;
}
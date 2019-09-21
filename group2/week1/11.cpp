#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int maxi = -100000;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(maxi < x){
            maxi = x;
        }
    }
    cout << maxi;
    return 0;
}
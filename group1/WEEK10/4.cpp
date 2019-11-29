#include <iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    int i = 1;
    while(true){
        int bob = i, nelson = 2 * i;
        if(n - bob <= 0){
            cout << "BOB";
            return 0;
        }
        n -= bob;
        if(n - nelson <= 0){
            cout << "NELSON";
            return 0;
        }
        n -= nelson;
        i++;
    }
    return 0;
}
#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int c = a / b;
    for(int i = 1; i <= c; i++){
        if(c % i == 0){
            cout << i << " ";
        }
    }
    return 0;
}
#include <iostream>
using namespace std;

int power(int a, int b){
    int res = 1;
    for(int i = 0; i < b; i++){
        res = res * a;
    }
    return res;
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << power(a, b);
    return 0;
}
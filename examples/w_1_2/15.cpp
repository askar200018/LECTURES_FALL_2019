#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void toBin(int x){
    if(x == 0)
        return;
    toBin(x / 2);
    cout << x % 2;
}

int main(){
    int x;
    cin >> x;
    toBin(x);
    return 0;
}
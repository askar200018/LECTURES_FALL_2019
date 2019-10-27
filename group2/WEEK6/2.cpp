#include <iostream>
using namespace std;

void toBin(int x){
    if(x == 0)
        return;
    int ost = x % 2;
    toBin(x / 2);
    cout << ost;
}

int main(){
    int n;
    cin >> n;
    toBin(n);
    return 0;
}
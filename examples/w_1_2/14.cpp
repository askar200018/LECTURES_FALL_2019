#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int deg(int x){
    if(x == 0)
        return 1;
    if(x == 1)
        return 2;
    return 2 * deg(x - 1);
}

int main(){
    int x;
    cin >> x;
    cout << deg(x);
    return 0;
}
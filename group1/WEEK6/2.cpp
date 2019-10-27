#include <iostream>
using namespace std;

int degree(int x){
    if(x == 0)
        return 1;
    if(x == 1)
        return 2;
    return 2 * degree(x - 1);
}

int main(){
    int n;
    cin >> n;
    cout << degree(n);
    return 0;
}
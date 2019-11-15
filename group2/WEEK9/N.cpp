#include <iostream>
using namespace std;

int sum(int a, int b){
    if(a == 0 && b == 0)
        return 0;
    if(a > 0 && b > 0)
        return 2 + sum(a - 1, b - 1);
    if(a > 0 && b < 0)
        return sum(a - 1, b + 1);
    if(a < 0 && b > 0)
        return sum(a + 1, b - 1);
    if(a < 0 && b < 0)
        return -2 + sum(a + 1, b + 1);
    if(a == 0 && b > 0)
        return 1 + sum(a, b - 1);
    if(a == 0 && b < 0)
        return -1 + sum(a,b + 1);
    if(a > 0 && b == 0)
        return 1 + sum(a - 1, b);
       
    return -1 + sum(a + 1,b);
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << sum(a, b);
    return 0;
}
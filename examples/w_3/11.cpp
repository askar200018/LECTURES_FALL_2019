#include <iostream>
#include <vector>
using namespace std;

int sum(int n){
    if(n == 0)
        return 0;
    return (n % 10) / 2 + sum(n / 10);
}

int main(){
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}
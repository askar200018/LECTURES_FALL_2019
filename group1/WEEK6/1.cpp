#include <iostream>
using namespace std;

int fib(int index){
    if(index == 1)
        return 1;
    if(index == 0)
        return 0;
    return fib(index - 1) + fib(index - 2);
}

int main(){
    int n;
    cin >> n;
    cout << fib(n);
    return 0;
}
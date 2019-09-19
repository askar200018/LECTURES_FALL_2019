#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n % 2 == 0 || n % 5 == 0){
        cout << "ok";
    }
    else {
        cout << "false";
    }
    return 0;
}
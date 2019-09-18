#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    int temp = 8;
    int num = 0;
    cin >> n;
    while(n > 0){
        if(n % 2 == 1){
            num = num + temp;
        }
        n = n / 2;
        temp = temp / 2;
    }
    cout << num;
    return 0;
}
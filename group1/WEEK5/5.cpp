#include <iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    int index = 0;
    while(n > 0){
        int ost = n % 2;
        if(ost == 1){
            break;
        }
        index++;
        n = n / 2;
    }
    cout << index;
    return 0;
}
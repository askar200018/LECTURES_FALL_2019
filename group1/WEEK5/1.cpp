#include <iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    int a[n][n];
    int k = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << k << " ";
        }
        cout << endl;
        k = k + 2;
    }
    
    return 0;
}
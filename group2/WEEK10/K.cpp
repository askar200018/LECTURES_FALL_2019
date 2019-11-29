#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main(){
    int n, m;
    cin >> n >> m;
    int k = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << k;
            if(k == 1)
                k = 0;
            else 
                k = 1;
        }
        cout << endl;
    }
    return 0;
}
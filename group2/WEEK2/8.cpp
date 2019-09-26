#include <iostream>
using namespace std;

int b[500500];

int main(){
    int n;
    cin >> n;
    char a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        b[a[i]] = b[a[i]] + 1;
    }
    for(char c = 'a'; c != 'z' + 1; c++){
        if(b[c] > 0){
            cout << c << " " << b[c] << endl;
        }
    }
    return 0;
}
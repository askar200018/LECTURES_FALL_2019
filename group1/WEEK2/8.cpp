#include <iostream>
#include <algorithm>
using namespace std;

int b[500];

int main(){
    int n;
    cin >> n;
    char a[n];
    for(int i = 0; i< n; i++){
        cin >> a[i];
        b[a[i]]++;
    }
    sort(a, a + n);
    for(char c = 'a'; c != 'z' + 1; c++){
        if(b[c] > 0)
            cout << c << " " << b[c] << endl;
    }
    return 0;
}
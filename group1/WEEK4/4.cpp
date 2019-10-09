#include <iostream>
using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    int siz = n * m;
    int a[siz];
    for(int i = 0; i < siz- 1; i++){
        a[i] = 1;
    }
    int l = 0;
    a[siz - 1] = k - (siz - 1);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[l] << " ";
            l++;
        }
        cout << endl;
    }
    return 0;
}
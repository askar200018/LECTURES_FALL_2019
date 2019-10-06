#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[100][100];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int maxi = -1e9;
    int x = 0, y = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] > maxi){
                maxi = a[i][j];
                x = i;
                y = j;
            }
        }
    }
    cout << x + 1 << " " << y + 1;
    return 0;
}
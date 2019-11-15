#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void diff(int a[], int *b, int n){
    for(int i = 0; i < n; i++)
        cout << b[i] - a[i] << " ";
}

int main(){
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n;i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
        cin >> b[i];
    diff(a, b, n);
    return 0;
}
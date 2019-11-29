#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b){
    if(a % 2 == 0 && b % 2 == 0)
        return a > b;
    if(a % 2 == 0)
        return true;
    if(b % 2 == 0)
        return false;
    return a < b;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
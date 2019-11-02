#include <iostream>
using namespace std;

bool isHere(int a[], int x, int index, int n){
    if(a[index] == x)
        return true;
    if(index == n)
        return false;
    return isHere(a, x, index + 1, n);
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int x;
    cin >> x;
    if(isHere(a, x, 0, n) == true)
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}
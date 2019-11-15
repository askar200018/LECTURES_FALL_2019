#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool binSearch(int a[], int n, int x, int i){
    if(i == n)
        return false;
    if(a[i] == x)
        return true;
    return binSearch(a, n, x, i + 1);
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int x;
    cin >> x;
    if(binSearch(a, n, x, 0) == true)
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}
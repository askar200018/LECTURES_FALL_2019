#include <iostream>
using namespace std;

bool binSearch(int a[], int n, int k, int i){
    if(a[i] == k)
        return true;
    if(i == n)
        return false;
    return binSearch(a, n, k , i + 1);
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int k;
    cin >> k;
    if(binSearch(a, n, k, 0) == true)
        cout << "YES";
    else 
        cout << "NO";
}
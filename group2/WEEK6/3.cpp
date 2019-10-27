#include <iostream>
using namespace std;

bool find(int a[], int index, int size, int x){
    if(a[index] == x)
        return true;
    if(index == size)
        return false;
    return find(a, index + 1, size, x);
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int x;
    cin >> x;
    if(find(a, 0, n, x))
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}
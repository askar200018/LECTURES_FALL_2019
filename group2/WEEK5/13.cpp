#include <iostream>
using namespace std;

int main(){
    int a, b, k;
    cin >> a >> b >> k;
    int sz = a * b;
    int arr[sz];
    for(int i = 0; i < sz - 1; i++){
        arr[i] = 1;
    }
    arr[sz - 1] = k - (sz - 1);
    int l = 0;
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            cout << arr[l]<< " ";
            l++;
        }
        cout << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int maxi = -1e9;
    int index = -1;
    for(int i = 0; i < n; i++){
        if(a[i] > maxi){
            maxi = a[i];
            index = i + 1;
        }
    }
    cout << maxi << " " << index;
    return 0;
}
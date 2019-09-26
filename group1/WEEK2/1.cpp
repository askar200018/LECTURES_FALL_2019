#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int index = 0;
    int maxi = a[0];
    for(int i = 1; i < n; i++){
        if(maxi < a[i]){
            maxi = a[i];
            index = i;
        }
    }
    cout << maxi << endl;
    cout << index + 1;
    return 0;
}
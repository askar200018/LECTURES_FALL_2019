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
    int mini = a[0];
    for(int i = 1; i < n; i++){
        if(maxi < a[i]){
            maxi = a[i];
        }
        if(mini > a[i]){
            mini = a[i];
        }
    }
    for(int i = 0; i < n; i++){
        if(maxi == a[i]){
            a[i] = mini;
        }
    }
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}
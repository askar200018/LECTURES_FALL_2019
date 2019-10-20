#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n - 1; i++){
        if(a[i] > a[i + 1]){
            cout << "Not interesting";
            return 0;
        }
    }
    cout << "Interesting";
    return 0;
}
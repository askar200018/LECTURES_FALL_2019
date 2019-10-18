#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int k = i;
        for(int j = 0; j < n; j++){
            cout << k << " ";
            k++;
        }
        cout << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int n; 
    cin >> n;
    for(int i = 0; i < n; i++){
        int k = i;
        for(int j = 0; j < n; j++){
            if(i == 0 || i == n - 1)
                cout << k;
            else if(j == 0 || j == n - 1)
                cout << k;
            else    
                cout << " ";
            k++;
        }
        cout << endl;
    }
    return 0;
}
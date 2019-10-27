#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n < 0){
        cout << "NO";
        return 0;
    }
    int first = 0;
    int second = 1;
    while (first <= n)
    {
        if(first == n){
            cout << "YES";
            return 0;
        }
        int temp = first;
        first = second;
        second += temp;
    }
    cout << "NO";
    return 0;
}
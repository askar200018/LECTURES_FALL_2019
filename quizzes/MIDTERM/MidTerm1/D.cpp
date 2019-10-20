#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    int cnt = 0;
    if(x % 2 == 0)
        cnt++;
    if(x % 5 == 0)
        cnt++;
    if(x % 17 == 0)
        cnt++;
    if(x % 19 == 0)
        cnt++;

    if(cnt >= 2)
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}
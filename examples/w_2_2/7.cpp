#include <iostream>
using namespace std;

bool isDivider(int n){
    if(n == 1)  
        return true;
    if(n % 2 != 0)
        return false;
    return isDivider(n / 2);
}

int main(){
    int n;
    cin >> n;
    if(isDivider(n) == true)
        cout << "YES";
    else 
        cout << "NO";
}
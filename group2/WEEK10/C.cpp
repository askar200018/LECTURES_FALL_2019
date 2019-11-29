#include <iostream>
using namespace std;

bool isFav(int n, int sum, int last){
    if(n == 0){
        if(sum % last == 0)
            return true;
        return false;
    }
    return isFav(n / 10, sum + n % 10, last);
}

int main(){
    int n;
    cin >> n;
    if(isFav(n, 0, n % 10) == true)
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}
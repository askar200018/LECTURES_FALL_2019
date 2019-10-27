#include <iostream>
using namespace std;

bool find(int x){
    if(x == 1)
        return true;
    if(x % 2 != 0)
        return false;
    return find(x / 2);
}

int main(){
    int n;
    cin >> n;
    if(find(n))
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}
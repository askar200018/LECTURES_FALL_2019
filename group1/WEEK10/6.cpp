#include <iostream>
using namespace std;

bool isValid(int a1,int b1, int a2, int b2){
    if(min(a1, b1) > min(a2, b2))
        return false;
    if(max(a1,b1) > max(a2, b2))
        return false;
    return true;
}

int main(){
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    if(isValid(a1,b1, a2, b2) == true)
        cout << "YES";
    else    
        cout << "NO";
    return 0;
}
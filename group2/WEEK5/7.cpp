#include <iostream>
using namespace std;

int main(){
    int h1, m1, h2, m2;
    cin >> h1 >> m1 >> h2 >> m2;
    if(h1 < h2){
        cout << "YES";
    }else if(m1 < m2 && h1 == h2){
        cout << "YES";
    }else   
        cout << "NO";
    return 0;
}
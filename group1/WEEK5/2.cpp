#include <iostream>
using namespace std;


int main(){
    int h1, m1, h2, m2;
    cin >> h1 >> m1 >> h2 >> m2;
    if(h1 > h2){
        cout << "NO";
    }else if(h1 == h2 && m1 >= m2){
        cout << "NO";
    }
    else 
        cout << "YES";
    return 0;
}
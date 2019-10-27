#include <iostream>
using namespace std;

int deg(int index){
    if(index == 0)
        return 1;
    if(index == 1)
        return 2;
    return 2 * deg(index - 1);
}

int main(){
    int n;
    cin >> n;
    cout << deg(n);
    return 0;
}
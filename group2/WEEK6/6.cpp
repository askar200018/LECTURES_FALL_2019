#include <iostream>
using namespace std;

int hateAlmat(int x){
    if(x == 0)
        return 0;
    return (x % 10)/ 2 + hateAlmat(x / 10);
}

int main(){
    int n;
    cin >> n;
    cout << hateAlmat(n);
    return 0;
}

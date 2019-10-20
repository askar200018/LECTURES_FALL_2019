#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int side = abs(x2 -x1);
    cout << x2 << " " << y2 - side << " " << x1 << " " << y2 - side;
    return 0;
}
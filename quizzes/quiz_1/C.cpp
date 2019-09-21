#include <iostream>

using namespace std;

int main(){
    int dimes, quarters, nickels, dollars;
    cin >> dimes >> quarters >> nickels >> dollars;
    int total = dimes * 10 + quarters * 25 + nickels * 5 + dollars * 100;
    cout << total / 100 << " " << total % 100;
    return 0;
}
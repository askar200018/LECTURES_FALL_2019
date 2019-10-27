#include <iostream>
#include <string>
using namespace std;

int sumOfDigits(string s, int index, int size){
    if(index == size - 1)
        return s[index] - 48;
    return s[index] - 48 + sumOfDigits(s, index + 1, size);
}
int main(){
    string s;
    cin >> s;
    cout << sumOfDigits(s, 0, s.size());
    return 0;
}
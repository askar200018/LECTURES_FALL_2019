#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    int sumE = 0, sumO = 0;
    for(int i = 0; i < s.size(); i++){
        if(i % 2 == 0){
            sumE += s[i] - '0';
        }else 
            sumO += s[i] - 48;
    }
    if(sumE == sumO)
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}
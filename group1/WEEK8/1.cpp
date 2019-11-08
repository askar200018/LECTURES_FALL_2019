#include <iostream>
#include <string>
using namespace std;

int main(){
    string s = "HELLO WORLD";
    string s2 = "WORLD";
    if(s.find(s2) != string::npos){
        cout << "YES " << s.find(s2);
    }else
        cout << "NO " << s.find(s2);
}
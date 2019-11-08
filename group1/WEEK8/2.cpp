#include <iostream>
#include <string>
using namespace std;

int main(){
    string s = "HELLO WORLD YES";
    cout << s.substr(6, 5) << endl;
    cout << s.substr(6);
}
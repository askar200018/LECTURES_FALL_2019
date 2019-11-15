#include <iostream>
#include <string>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    if(s.find(t) != string::npos)
        cout << "YES " << s.find(t);
    else 
        cout << "NO " << s.find(t);
    return 0;
}
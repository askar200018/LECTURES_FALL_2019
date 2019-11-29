#include <iostream>
#include <string>
using namespace std;

int main(){
    string t, s;
    cin >> t >> s;
    int sz = 0;
    if(s.size() % t.size() != 0){
        cout << "NO";
        return 0;
    }
    sz = s.size() / t.size();
    string res = "";
    for(int i = 0; i < sz; i++){
        res += t;
    }
    if(res == s)
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}
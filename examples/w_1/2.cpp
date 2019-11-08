#include <iostream>
#include <string>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    int k;
    cin >> k;
    string res = "";
    for(int i = 0; i < k; i++)
        res += s[i];
    res += t;
    for(int i = k; i < s.size(); i++)   
        res += s[i];
    cout << res << endl;
    return 0;
}
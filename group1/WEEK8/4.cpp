#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;

int main(){
    string s, t;
    getline(cin, s);
    stringstream X(s);
    
    string res = "";
    
    while(getline(X, t, ' ')){
        if(res.size() < t.size())
            res = t;
    }
    cout << res << " " << res.size();
    // one two three four five six seven
    return 0;
}
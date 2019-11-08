#include <iostream>
#include <string>

using namespace std;

int main(){
    string t, s;
    cin >> t >> s;
    while(s.size() > 0){
        if(s.find(t) != string::npos){
            s.erase(s.find(t), t.size());
        }else{
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
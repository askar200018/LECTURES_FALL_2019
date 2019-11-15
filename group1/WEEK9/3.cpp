#include <iostream>
#include <set>
using namespace std;

int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    string s;
    set<string> st;
    while(cin >> s){
        st.insert(s);
    }
    if(st.size() >= 7)
        cout << "Good";
    else 
        cout << "Not good";
    return 0;
}
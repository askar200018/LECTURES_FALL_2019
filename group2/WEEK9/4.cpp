#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    set<char> st;
    for(int i = 0; i < s.size(); i++){
        s[i] = tolower(s[i]);
        st.insert(s[i]);
    }
    cout << st.size() << endl;
    set<char>::iterator it;
    for(it = st.begin(); it != st.end(); it++){
        cout << *it << " "; // cout << s[i] << " ";
    }
    return 0;
}